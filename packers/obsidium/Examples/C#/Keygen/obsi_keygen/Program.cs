using System;
using System.Text;
using System.Runtime.InteropServices;

namespace obsi_keygen_test
{
    class Program
    {
        static void Main(string[] args)
        {
            System.Console.WriteLine("Generating long license key");
            string lic;
            if (ObsidiumKeygen.generateLicenseLong("sample_long.opf", "Test1", "Test2", "Test3", null, null, null, out lic))
            {
                System.Console.WriteLine(lic);

                byte[] hash = new byte[16];
                byte[] bLic = System.Text.Encoding.ASCII.GetBytes(lic + char.MinValue);
                if (ObsidiumKeygen.GetLicenseHash(bLic, ObsidiumKeygen.LICENSE_TEXT, hash))
                    Console.WriteLine("License hash: " + BitConverter.ToString(hash, 0, 16).Replace("-", ""));
                else
                    System.Console.WriteLine("Could not retrieve license hash");

                string licInfo1, licInfo2, licInfo3, licInfo4, sysId;
                System.DateTime expDate;
                if (ObsidiumKeygen.verifyLicenseLong("sample_long.opf", lic, out licInfo1, out licInfo2, out licInfo3, out licInfo4, out sysId, out expDate))
                {
                    System.Console.WriteLine("License verification successful");
                    System.Console.WriteLine("Info 1: " + licInfo1);
                    System.Console.WriteLine("Info 2: " + licInfo2);
                    System.Console.WriteLine("Info 3: " + licInfo3);
                    System.Console.WriteLine("Info 4: " + licInfo4);
                    if (expDate.ToFileTime() != 0)
                        System.Console.WriteLine("License expiration date: " + expDate.ToShortDateString());
                }
                else
                    System.Console.WriteLine("License verification failed");
            }
            else
                System.Console.WriteLine("Short license key generation failed");

            System.Console.WriteLine("Generating short license key");
            string licShort;
            System.DateTime exp = System.DateTime.Now;
            exp = exp.AddDays(10);
            if (ObsidiumKeygen.generateLicenseShort("sample_short.opf", "John Doe", out licShort, null, true, 12345, exp))
            {
                System.Console.WriteLine("Short key: " + licShort);

                byte[] hash = new byte[16];
                byte[] bLic = System.Text.Encoding.ASCII.GetBytes(licShort + char.MinValue);
                if (ObsidiumKeygen.GetLicenseHash(bLic, ObsidiumKeygen.LICENSE_SHORT, hash))
                    Console.WriteLine("License hash: " + BitConverter.ToString(hash, 0, 16).Replace("-", ""));
                else
                    System.Console.WriteLine("Could not retrieve license hash");

                UInt16 ver_custom;
                System.DateTime ver_exp;
                if (ObsidiumKeygen.verifyLicenseShort("sample_short.opf", "John Doe", licShort, null, out ver_custom, out ver_exp))
                {
                    System.Console.WriteLine("License verification successful");
                    if (ver_exp.ToFileTime() != 0)
                        System.Console.WriteLine("License expiration date: " + ver_exp.ToShortDateString());
                    if (ver_custom != 0)
                        System.Console.WriteLine("License custom value: " + ver_custom);
                }
                else
                    System.Console.WriteLine("License verification failed");
            }
            else
                System.Console.WriteLine("Short license key generation failed");

            System.Console.WriteLine("Press any key...");
            System.Console.ReadKey(true);
        }
    }
}

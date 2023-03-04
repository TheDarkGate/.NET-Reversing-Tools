using System;
using System.Text;

namespace obsi_csharp_demo
{
    class Program
    {
        static void Main(string[] args)
        {
            if (Obsidium.isLicensed())
            {
                System.Console.WriteLine("Licensed");
                byte[] hash = new byte[34];
                Obsidium.getLicenseHash(hash);
                Console.WriteLine("License hash: " + BitConverter.ToString(hash, 0, 16).Replace("-", ""));
                for (uint i = 0; i < 4; i++)
                {
                    StringBuilder info = new StringBuilder(128);
                    if (Obsidium.getLicenseInfo(i, info))
                        Console.WriteLine("License info " + i + " (ANSI): " + info.ToString());
                    info = new StringBuilder(128);
                    if (Obsidium.getLicenseInfoW(i, info))
                        Console.WriteLine("License info " + i + " (WIDE): " + info.ToString());
                }
                System.Runtime.InteropServices.ComTypes.FILETIME licExpDate = new System.Runtime.InteropServices.ComTypes.FILETIME();
                Obsidium.getLicenseExpiration(ref licExpDate);
                if (licExpDate.dwHighDateTime != 0 || licExpDate.dwLowDateTime != 0)
                    Console.WriteLine("License expiration date: " + DateTime.FromFileTimeUtc((long)licExpDate.dwLowDateTime + ((long)licExpDate.dwHighDateTime << 32)).ToLongDateString());
                else
                    Console.WriteLine("No license expiration date");
            }
            else
                System.Console.WriteLine("Not licensed");
            System.Runtime.InteropServices.ComTypes.FILETIME expDate = new System.Runtime.InteropServices.ComTypes.FILETIME();
            Obsidium.getExpirationDate(ref expDate);
            if (expDate.dwHighDateTime != 0 || expDate.dwLowDateTime != 0)
                Console.WriteLine("Expiration date: " + DateTime.FromFileTimeUtc((long)expDate.dwLowDateTime + ((long)expDate.dwHighDateTime << 32)).ToLongDateString());
            else
                Console.WriteLine("No expiration date");
            Console.WriteLine("Custom value: " + Obsidium.getCustomValue());
            Console.WriteLine("Trial days: " + Obsidium.getTrialDays());
            Console.WriteLine("Initial trial days: " + Obsidium.getInitialTrialDays());
            Console.WriteLine("Trial runs: " + Obsidium.getTrialRuns());
            Console.WriteLine("Initial trial runs: " + Obsidium.getInitialTrialRuns());
            Console.WriteLine("License status: " + Obsidium.getLicenseStatus());
            StringBuilder sysId = new StringBuilder(34);
            if (Obsidium.getSystemId(sysId))
                Console.WriteLine("System ID: " + sysId);
            else
                Console.WriteLine("getSystemId failed");
            if (Obsidium.isProtected())
                System.Console.WriteLine("Protected");
            else
                System.Console.WriteLine("Not protected");
            System.Console.WriteLine("Please press any key...");
            System.Console.ReadKey(true);
        }
    }
}

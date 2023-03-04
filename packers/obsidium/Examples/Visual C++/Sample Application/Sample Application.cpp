/*
How to compile:

- Use the LIB tool (included with Visual C++) to create the library files:
  lib /def:dummy.def
  and copy the resulting .lib files to the application directory
  The .def files are located in the SDK\C folder
*/

#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include "..\..\..\sdk\c\api\obsidium.h"


int main(int argc, char* argv[])
{
	if (obsIsLicensed())
	{
		// the following code can only be executed if a
		// valid license key is present
		OBSIDIUM_LIC_START;
		printf("Application is registered\n");
		// display license expiration date if set
		FILETIME expDate;
		obsGetLicenseExpiration(&expDate);
		if (expDate.dwHighDateTime == 0 && expDate.dwLowDateTime == 0)
			printf("License does not expire\n");
		else
		{
			SYSTEMTIME expDateS;
			FileTimeToSystemTime(&expDate, &expDateS);
			printf("License expires on %i/%i/%i\n", expDateS.wYear, expDateS.wMonth, expDateS.wDay);
		}
		// display license information strings
		for (int i = 0; i < 4; i++)
		{
			char licInfo[128];
			obsGetLicInfo(i, licInfo);
			printf("License information %i: %s\n", i, licInfo);
		}
		OBSIDIUM_LIC_END;
	}
	else
	{
		// the following code will be decrypted when excuted
		OBSIDIUM_ENC_START;
		printf(obsSecureString("Application is not registered\n"));
		// display trial information
		printf("Days left in trial period: %i\n", obsGetTrialDays());
		printf("Runs left in trial period: %i\n", obsGetTrialRuns());
		OBSIDIUM_ENC_END;
	}
	printf("Press any key to exit...");
	_getch();
	return 0;
}

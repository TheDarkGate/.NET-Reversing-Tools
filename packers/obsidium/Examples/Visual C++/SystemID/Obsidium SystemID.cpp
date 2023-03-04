/*
How to compile:

- Use the LIB tool (included with Visual C++) to create the library files:
  lib /def:dummy.def
  and copy the resulting .lib files to the application directory
  The .def files are located in the SDK\C folder
*/

#include "stdafx.h"
#include "windows.h"
#include <conio.h>
#include "..\..\..\sdk\c\api\obsidium.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char systemID[32];
	if (obsGetSystemId(systemID))
		printf("Your system ID: %s\n", systemID);
	else
		printf("Failed to retrieve system ID\n");
	printf("Press any key to exit...");
	_getch();
	return 0;
}


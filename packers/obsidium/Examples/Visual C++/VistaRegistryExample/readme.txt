This project consists of two executables:
enter_license - which represents the actual application
store_license - a helper program to store the license information

If invoked without administrator privileges (i.e. the default on Vista),
enter_license will execute store_license instead of simply calling
storeLicenseShort.
Both executables need to be protected using the same project file.

Of course this functionality could also be implemented in the main
application, thus eliminating the need for an additional executable.
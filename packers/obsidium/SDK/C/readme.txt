How to use the Obsidium dummy and keygen DLLs:

Visual Studio:
- Use the LIB tool to create the library files:
  lib /def:obsidium.def
  or
  lib /def:keygen.def
- Include obsidium.h or keygen.h in your code
- Add the library file(s) as linker input in the development enviroment

C++ Builder:
- Use the IMPLIB tool to create the library files:
  implib obsidium.lib obsidium.dll
  or
  implib keygen.lib keygen.dll
- Include obsidium.h or keygen.h in your code
- Add the library file(s) to your project

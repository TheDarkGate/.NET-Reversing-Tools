;
;   PureBasic - Obsidium example


; open console
    OpenConsole()
    ConsoleTitle ("PureBasic - Obsidium Example:")

; display some information


    If OpenLibrary(0, "obsidium.dll")
      *obsIsLicensed = GetFunction(0, "obsIsLicensed")
      *obsGetLicenseInfo = GetFunction(0, "obsGetLicenseInfo")
      If *obsIsLicensed And *obsGetLicenseInfo
          result = CallFunctionFast(*obsIsLicensed)
          If result
            PrintN("Licensed!")
            licInfo.s{32}
            If CallFunctionFast(*obsGetLicenseInfo, 0, @licInfo)
              PrintN("License info: " + licInfo)
            EndIf      
          EndIf
      EndIf
    EndIf

; exit
    CloseConsole()
End

; IDE Options = PureBasic 4.41 (Windows - x86)
; ExecutableFormat = Console
; EnableXP
; Executable = example.exe
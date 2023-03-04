@echo off
copy "%~dp0\Capcom.sys" "%WINDIR%\system32\drivers\Capcom.sys"
sc create Capcom binPath= system32\drivers\Capcom.sys type= kernel
sc start Capcom
echo Driver loaded, fire up the exploit now then press a key when exploit has been done.
echo If you see any access denied, close this and relaunch the bat as Administrator.
echo DO NOT PRESS ANY KEY UNTIL YOU HAVE FINISHED LAUNCHING THE EXPLOIT
pause
PING localhost -n 2 >NUL
sc stop Capcom
sc delete Capcom
del "%WINDIR%\system32\drivers\Capcom.sys"
PING localhost -n 2 >NUL
sc stop Capcom
sc delete Capcom
del "%WINDIR%\system32\drivers\Capcom.sys"
PING localhost -n 2 >NUL
echo Cya
pause
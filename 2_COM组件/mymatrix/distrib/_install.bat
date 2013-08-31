echo off
echo Deploying project mymatrix, version 1_0
echo Running mglinstaller...
mglinstaller
set path=.\bin\win32;%path%
del mglinstaller.exe
echo Registering DLL's
copy mwcomutil.dll bin\win32
del mwcomutil.dll
copy mclcommain.dll bin\win32
del mclcommain.dll
mwregsvr bin\win32\mwcomutil.dll
mwregsvr mymatrix_1_0.dll
pause
echo Installation complete.
echo Please add the bin\win32 directory created by the installation to your system path.
pause

@echo off

set PWD=%cd%
echo @echo off > lab51py2w32-setup-cont.BAT
echo cd %PWD% >> lab51py2w32-setup-cont.BAT
echo setup.BAT >> lab51py2w32-setup-cont.BAT
if exist "%AppData%\Microsoft\Windows\Start Menu\Programs\Startup\lab51py2w32-setup-cont.BAT" (
	del "%AppData%\Microsoft\Windows\Start Menu\Programs\Startup\lab51py2w32-setup-cont.BAT" 1>NUL 2>NUL
	GOTO Label2
)

echo|set /p="[2] preparing required tools..."
copy "lab51py2w32.BAT" %windir%\system32 /Y /V 1>NUL 2>NUL
md "%windir:~0,3%\Python-2.7-32/bin" 1>NUL 2>NUL
copy "hook-data.py" "%windir:~0,3%\Python-2.7-32/bin" /Y /V 1>NUL 2>NUL
copy "wget.exe" %windir%\system32 /Y /V 1>NUL 2>NUL
copy "help.txt" "%windir:~0,3%\Python-2.7-32/bin" /Y /V 1>NUL 2>NUL
if not %errorlevel% == 0 (
	echo FAILED.
	GOTO Label1
)
echo DONE.

echo|set /p="[3] retrieving [python-2.7.12.msi]..."
wget -c --no-check-certificate https://www.python.org/ftp/python/2.7.12/python-2.7.12.msi -q 1>NUL 2>NUL
echo DONE.

if exist %windir%\Microsoft.NET\Framework\v3.5 (
	echo [4] FOUND: %windir%\Microsoft.NET\Framework\v3.5
	GOTO Label2
)

echo|set /p="[4] enabling [dotnetfx35]..."
Dism /online /Enable-Feature /FeatureName:"NetFx3" 1>NUL 2>NUL
if %errorlevel% == 0 (
	echo DONE.
	GOTO Label2
)

echo FAILED.
echo|set /p="[4-1] retrieving [dotnetfx35]..."
wget -c --no-check-certificate http://download.microsoft.com/download/2/0/E/20E90413-712F-438C-988E-FDAA79A8AC3D/dotnetfx35.exe -q 1>NUL 2>NUL
echo DONE.

echo|set /p="[4-2] installing [.NET-3.5] (action may require restart)..."
copy /Y /V lab51py2w32-setup-cont.BAT "%AppData%\Microsoft\Windows\Start Menu\Programs\Startup" 1>NUL 2>NUL
dotnetfx35.exe 1>NUL 2>NUL
if not exist %windir%\Microsoft.NET\Framework\v3.5 (
	echo DONE.
	del "%AppData%\Microsoft\Windows\Start Menu\Programs\Startup\lab51py2w32-setup-cont.BAT" 1>NUL 2>NUL
	echo [warning] ^<.NET-3.5^> is essential for ^<Python-2.7^> install.
	GOTO Label1
)
echo DONE.
echo ^<WINDOWS UPDATE^> needs an immediate restart and cannot just bypassed.
pause
shutdown /r /f /t 0
GOTO Label1

::Label2
::wmic qfe list full /format:table | findstr /i "948609"
::wmic qfe list full /format:table | findstr /i "948610"

:Label2
echo|set /p="[5] installing [Python-2.7-32]..."
%windir:~0,3%\Python-2.7-32/python.exe -V 1>NUL 2>NUL
if not %errorlevel% == 0 (
	python-2.7.12.msi InstallAllUsers=0 TargetDir=%windir:~0,3%\Python-2.7-32 /quiet 1>NUL 2>NUL
)
echo DONE.

echo|set /p="[6] upgrading [pip]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location --upgrade pip -q 1>NUL 2>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --upgrade pip -q 1>NUL 2>NUL
if not %errorlevel% == 0 (
	echo [warning] ^<WINDOWS UPDATE^> needs an immediate restart.
	echo user chose to restart later.
	GOTO Label1
)
echo DONE.

echo|set /p="[7] configuring [setuptools<45.0.0]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location -q --upgrade "setuptools<45.0.0" 1>NUL 2>NUL
if not %errorlevel% == 0 (
	echo FAILED.
	GOTO Label1
)
echo DONE.

echo|set /p="[8] installing [pyinstaller==3.1]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location pyinstaller==3.1 -Iv -q 1>NUL 2>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location six -q 1>NUL 2>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location packaging -q 1>NUL 2>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location appdirs -q 1>NUL 2>NUL
if not %errorlevel% == 0 (
	echo FAILED.
	GOTO Label1
)
echo DONE.

echo [OK] lab51py2w32 installed.
pause
exit

:Label1
echo [FAILED] lab51py2w32 not installed yet.
pause

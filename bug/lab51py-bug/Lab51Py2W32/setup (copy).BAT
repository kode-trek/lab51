@echo off

echo|set /p="[1] searching for internet connection..."
ping google.com >nul
if not %errorlevel% == 0 (
	echo FAILED.
	echo no internet connection.
	GOTO Label1
)
echo DONE.

echo|set /p="[2] preparing required tools..."
copy "lab51py2w32.BAT" %windir%\system32 /Y /V 1>NUL 2>NUL
:: md "%windir:~0,3%\Python-2.7-32/bin" 1>NUL 2>NUL
copy "help.txt" "%windir:~0,3%\Python-2.7-32/bin" /Y /V 1>NUL 2>NUL
if not %errorlevel% == 0 (
	echo FAILED.
	GOTO Label1
)
echo DONE.

echo|set /p="[3] installing [Python-2.7.18.amd64]..."
%windir:~0,3%\Python-2.7-32/python.exe -V 1>NUL 2>NUL
if not %errorlevel% == 0 (
	python-2.7.18.amd64.msi InstallAllUsers=0 TargetDir=%windir:~0,3%\Python-2.7-32 /quiet 1>NUL 2>NUL
	timeout /t 120
)
echo DONE.

echo|set /p="[6] upgrading [pip]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --no-python-version-warning --upgrade pip -q 1>NUL 2>NUL

echo|set /p="[6] installing [virtualenv]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install virtualenv -q 1>NUL 2>NUL
%windir:~0,3%\Python-2.7-32/python.exe -m virtualenv env -q 1>NUL 2>NUL

echo [OK] Lab51Py2W32 installed.
pause
exit

:Label1
echo [FAILED] lab51py2w32 not installed yet.
pause

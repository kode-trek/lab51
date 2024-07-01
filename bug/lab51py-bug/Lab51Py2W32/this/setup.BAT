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
copy "lab51py2w32.BAT" %windir%\system32 /Y /V
md "%windir:~0,3%\Python-2.7-32/bin" 1>NUL 2>NUL
copy "help.txt" "%windir:~0,3%\Python-2.7-32/bin" /Y /V
echo DONE.

echo|set /p="[3] installing [Python-2.7.18.amd64]..."
python-2.7.18.amd64.msi InstallAllUsers=0 TargetDir=%windir:~0,3%\Python-2.7-32 /quiet
echo DONE.

echo|set /p="[4] upgrading [pip]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --no-python-version-warning --upgrade pip
%windir:~0,3%\Python-2.7-32/python.exe -m pip install --no-python-version-warning --upgrade pip
echo DONE.

echo|set /p="[5] installing [virtualenv]..."
%windir:~0,3%\Python-2.7-32/python.exe -m pip install virtualenv
echo DONE.

echo|set /p="[6] creating [venv]..."
%windir:~0,3%\Python-2.7-32/python.exe -m virtualenv env
echo DONE.

echo [OK] Lab51Py2W32 installed.
pause
exit

:Label1
echo [FAILED] lab51py2w32 not installed yet.
pause

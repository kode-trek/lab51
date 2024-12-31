@echo off

if [%1] == [] (
	type %windir:~0,3%\Python-2.7-32\bin\help.txt
	GOTO Label1
)

if %1 == --pkg (
::	%windir:~0,3%\Python-2.7-32/python.exe -m pip install --disable-pip-version-check --no-python-version-warning --no-warn-script-location %2 -q
	%windir:~0,3%\Python-2.7-32/python.exe -m pip install %2
	GOTO Label1
)

%windir:~0,3%\Python-2.7-32/python.exe %1

:Label1
pause

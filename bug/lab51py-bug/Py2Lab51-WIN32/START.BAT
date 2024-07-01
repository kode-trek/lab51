@echo off

if exist %systemroot%/../python27/python.exe (
	%systemroot%/../python27/python.exe --version
) else (
	python-2.7.12.msi
)

echo [...]: Trying to install associated package(s)
ping pypi.org 1>NUL
if %errorlevel% == 1 (
	echo [ FAILED ]: Not able to access PyPI.org
	pause
	exit
) else (
%systemroot%/../python27/python.exe -m pip install --upgrade pip 2>NUL
%systemroot%/../python27/python.exe -m pip install --upgrade numpy 2>NUL
)
cls

%systemroot%/../python27/python.exe hello.py 2>NUL
if %errorlevel% == 1 (
	echo The Python 2.7 isn't installed or it's not configured properly.
)

pause

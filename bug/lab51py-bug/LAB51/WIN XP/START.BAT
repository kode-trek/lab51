@echo off

ping python.org 1> NUL
if %errorlevel% == 1 (
	echo [FAILED]: Not able to collect packages from PyPI.
	echo Are we connected to the Internet?
	pause
	exit
)

python --version
if errorlevel 1 (
	cls
	echo [FAILED]: The LAB51 depends on Python 2.7.12
	echo The Python 2.7 isn't installed or it's not configured properly.
	echo Do we have The python.exe added to PATH?
	pause
	exit
) else (
@echo off
	copy LAB51.BAT %systemroot%\system32
	LAB51 --setup
	cls
	echo '[OK]: LAB51 was successfully installed.'
	cd ..
	rmdir /s/q LAB51-W32
	pause
)

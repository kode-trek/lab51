int main(int argc, char* argv[]) {
	/*		variable(s)
	[v1]	path
	[err]	color-error/warning
	*/
	string err1 = color("yellow", "[WARNING] ");
	string err2 = color("red", "[FAILED] ");
	//
	string v1 = R"(%SystemDrive%\python38)";
	// command(s)
	int e = 0;
	// op(s)
	cout << "-- LAB51PY --" << endl;
	if (not write_access("C:\\Windows\\System32")) {
		cout << "Permission Denied. RUN AS ADMINISTRATOR!" << endl;
		k2c();
		exit(0);
	}
	if (argv[1] == "--un-install") {
		sys("lib/un-install-1.BAT");
		exit(0);
	}
	if (exist(v1)) {
		cout << "[WARNING] file/folder exists: " + quote(v1) << endl;
		k2c();
		exit(0);
	}
	disp("[] establishing connection to 'python.org'...");
	e = sys("ping python.org 1> NUL 2> NUL");
	if (e) {
		cout << "HALTED.""\n""[FAILED] internet connection not found." << endl;
		k2c();
		exit(1);
	}
	cout << "DONE." << endl;
	wait(2);
	sys("lib\\python-3.8.9-amd64.exe");
//	python-2.7.12.msi InstallAllUsers=0 TargetDir=%windir:~0,3%\Python-2.7-32 /quiet 1>NUL 2>NUL
	wait(2);
	e = sys("XCOPY /q/y lib\\lab51py.exe C:\\Windows\\System32");
	if (e) {cout << "failed-copy-sys32." << endl;}
	wait(2);
	sys("python.exe --version");
	wait(2);
	sys("lab51py");
	k2c();
}
//python --version
//if errorlevel 1 (
//	cls
//	echo [FAILED]: The LAB51 depends on Python 2.7.12
//	echo The Python 2.7 isn't installed or it's not configured properly.
//	echo Do we have The python.exe added to PATH?
//	pause
//	exit
//) else (
//@echo off
//	copy LAB51.BAT %userprofile%
//	setx path "%path%;%userprofile%"
//	LAB51 --setup
//	cls
//	echo '[OK]: LAB51 was successfully installed.'
//	cd ..
//	rmdir /s/q LAB51-W32
//	pause
//)

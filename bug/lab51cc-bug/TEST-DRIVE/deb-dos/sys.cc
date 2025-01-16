/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "SYSTEM [COMMAND]""\n"
 "int sys (string)""\n"
 "================""\n"
 << endl;
 // var(s)
 int c = 0;
 string cmd1 = "ls";
 // msg(s)
 string msg1 = "[] executing " + quote(cmd1) + " command...";
 // op(s)
 note(msg1);
 if (os() == "win32") c = sys(cmd1 + " 2>nul");
 if (os() == "linux") c = sys(cmd1 + " 1>/dev/null 2>/dev/null");
 if (c) note("HALTED.""\n""[FAILED] " + cmd1 + "\n");
 if (not c) note("DONE""\n");
 //
}

 // var(s)
 int c = 0;
 string cmd1 = "dir " + quote("گویش پارسی");
 cout << sys(cmd1) << endl; pausee(); exit(1);
 // msg(s)
 string msg1 = "[] executing " + quote(cmd1) + " command...";
 // op(s)
 note(msg1);
 if (os() == "win32") c = sys(cmd1 + " 2>nul");
 if (os() == "linux") c = sys(cmd1 + " 1>/dev/null 2>/dev/null");
 if (c) note("HALTED.""\n""[FAILED] " + cmd1 + "\n");
 if (not c) note("DONE""\n");
 pausee();

 cout << sys("ping 127.0.0.1 -n 6 > nul") << endl;

echo %errorlevel%

in WINDOWS pausee() skips when intruptted bu user <ctrl+c>

https://perl-win32-users.listserv.activestate.narkive.com/LiFXdqcH/using-waitpid-and-wifexited-on-windows

https://stackoverflow.com/questions/5487249/how-write-posix-waitpid-analog-for-windows



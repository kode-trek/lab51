/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

void apt(string arg1, ...) {
 #ifdef __linux__
 /* variable(s)
 [v1] package-to-be-removed
 [inp] mark-input
 [cmd] mark-command
 [out] mark-output
 [err] mark-error/warning
 */
 string inp1 = mark("[inp] ", "blue");
 string cmd = mark("[] ", "blue");
 string out1 = mark("DONE.", "green");
 string err1 = mark("HALTED.""\n""[FAILED] ", "red");
 //
 string v1 = arg1;
 // message(s)
 string msg1 =
 inp1 + v1 + "\n" +
 cmd + "removing package by force...";
 // command(s)
 int e = 0;
 string cmd1 = "sudo dpkg --remove --force-remove-reinstreq " + quote(arg1);
 // op(s)
 sys("sudo '' 2>/dev/null"); // traps sudo-password
 note(msg1);
 e = sys(cmd1 + " 1>/dev/null 2>/dev/null");
 if (e) {
  cout <<
  inp1 + v1 + "\n" +
  cmd + cmd1
  << endl;
  exit(1);
 }
 cout << out1 << endl;
 #endif
 apt();
}

void apt(...) {
 #ifdef __linux__
 /* variable(s)
 [cmd] mark-command
 [out] mark-output
 [err] mark-error/warning
 */
 string cmd = mark("[] ", "blue");
 string out1 = mark("DONE.", "green");
 string err1 = mark("HALTED.""\n""[FAILED] ", "red");
 // message(s)
 string msg1 = cmd + "updating APT (might take long)...";
 // command(s)
 int e = 0;
 string cmd1 = "sudo apt-get install --reinstall -f -y"; // switch cmd1 and cmd2 order
 string cmd2 = "sudo dpkg --configure -a";
 string cmd3 = "sudo init 6";
 string cmd4 = "sudo apt-get update -y";
 string cmd5 = "sudo apt-get install --reinstall apt -y";
 string cmd6 = "sudo apt-get install --reinstall software-properties-common -y";
 string cmd7 = "sudo apt-get clean -y";
 string cmd8 = "sudo apt-get autoclean -y";
 // op(s)
 sys("sudo '' 2>/dev/null"); // traps sudo-password
 note(msg1);
 // fixes broken-package(s).
 sys(cmd1 + " 1>/dev/null 2>/dev/null");
 // fixes conflicted lock(s).
 e = sys(cmd2 + " 1>/dev/null 2>/dev/null");
 if (e) {
  cout <<
  err1 + cmd2 + "\n" +
  "system needs a reboot.""\n" +
  cmd + cmd3
  << endl;
  exit(1);
 }
 // updates repo-list.
 sys(cmd4 + " 1>/dev/null 2>/dev/null");
 // upgrades apt.
 sys(cmd5 + " 1>/dev/null 2>/dev/null");
 // installs software-properties-common.
 sys(cmd6 + " 1>/dev/null 2>/dev/null");
 // clears out local-repo.
 sys(cmd7 + " 1>/dev/null 2>/dev/null");
 sys(cmd8  + " 1>/dev/null 2>/dev/null");
 // updating repo-list.
 sys(cmd4 + " 1>/dev/null 2>/dev/null");
 cout << out1 << endl;
 #endif
 #ifdef _WIN32
// cout << "NONE." << endl;
 #endif
}

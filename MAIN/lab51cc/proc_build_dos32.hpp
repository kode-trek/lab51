/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

void dos32_f1(string arg1) {
 /* variable(s)
 [v1] log
 [v2] input
 [v3] output
 [v4] $USER
 */
 string inp1 = mark("[INP] ", "blue");
 string cmd = mark("[] ", "blue");
 string out1 = mark("[OUT] ", "blue");
 string out2 = mark("DONE.", "green");
 string err1 = mark("[WARNING] ", "yellow");
 string err2 = mark("HALTED.""\n""[ERROR] ", "red");
 //
 string v1 = "LOG_x32_" + ts();
 string v2 = can(arg1);
 string v3 = uri(v2, "file-name") + "_x32_" + ts() + ".exe";
 string v4 = "~";
 if (uname() == "root") v4 = "/root";
 if (uname() != "root") v4 = "/home/" + uname();
 // message(s)
 string msg1 =
 inp1 + quote(uri(v2, "full-name")) + "\n" +
 cmd + "compiling and building <.EXE>cutable x32-DOS/Windows app...";
 // command(s)
 string cmd1 = "i686-w64-mingw32-g++ " + quote(v2) + " -o " + quote(v3) +
 " -std=c++2a -static-libgcc -static-libstdc++"
 " -I" + v4 + "/.area51/lab51cc/"
 " -include" + v4 + "/.area51/lab51cc/heads-up/deb-dos.hh";
 // op(s)
 note(msg1);
 int e = sys(cmd1 + " 1>>" + v1 + " 2>>" + v1);
 if (space(v1) and exist(v3)) {
  cout <<
  out2 + "\n" +
  err1 + "cat " + quote(uri(v1, "parent") + "/" + v1) + "\n" +
  out1 + quote(v3)
  << endl;
  exit(1);
 }
 if (space(v1) and (not exist(v3))) {
  cout << err2 + "cat " + quote(uri(v1, "parent") + "/" + v1) << endl;
  exit(1);
 }
 cout << out2 + "\n" + out1 + "./" + quote(v3) << endl;
  drop(v1, "\n\n[COMMAND] " + cmd1 + "\n");
 rm(v1);
}

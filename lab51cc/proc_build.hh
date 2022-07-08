/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
void dos32(string arg1) {
 /* variable(s)
 [v1] log
 [v2] input
 [v3] output
 */
 string inp1 = mark("blue", "[inp] ");
 string cmd = mark("blue", "[] ");
 string out1 = mark("blue", "[out] ");
 string out2 = mark("green", "DONE.");
 string err1 = mark("red", "[ERROR |");
 string err2 = mark("yellow", "| WARNING]");
 //
 string v1 = "LOG_x32_" + ts();
 string v2 = arg1;
 string v3 = uri(v2)[2] + "_x32_" + ts() + ".exe";
 // message(s)
 string msg1 =
 inp1 + quote(uri(v2)[1]) + "\n" +
 out1 + quote(v3) + "\n" +
 cmd + "compiling and building <.EXE>cutable x32-DOS/Windows app...";
 // command(s)
 string cmd1 = "i686-w64-mingw32-g++ " + quote(v2) + " -o " + quote(v3) +
 " -fconcepts -static-libgcc -static-libstdc++ -lstdc++fs -std=c++2a -pthread"
 " -I/home/" + uname() + "/.area51/lab51cc/"
 " -include/home/" + uname() + "/.area51/lab51cc/heads-up/deb-dos.hh";
 // op(s)
 note(msg1);
 int e = sys(cmd1 + " 1>>" + v1 + " 2>>" + v1);
 if (fsize(v1)) {
  cout <<
  err1 + err2 + "\n" +
  cmd + "cat " + quote(uri(v1)[0] + "/" + v1)
  << endl;
  drop(v1, "\n\n[COMMAND] " + cmd1 + "\n");
  exit(1);
 }
 cout << out2 << endl;
 rm(v1);
}
void dos64(string arg1) {
 /* variable(s)
 [v1] log
 [v2] input
 [v3] output
 */
 string inp1 = mark("blue", "[inp] ");
 string cmd = mark("blue", "[] ");
 string out1 = mark("blue", "[out] ");
 string out2 = mark("green", "DONE.");
 string err1 = mark("red", "[ERROR |");
 string err2 = mark("yellow", "| WARNING]");
 //
 string v1 = "LOG_x64_" + ts();
 string v2 = arg1;
 string v3 = uri(v2)[2] + "_x64_" + ts() + ".exe";
 // message(s)
 string msg1 =
 inp1 + quote(uri(v2)[1]) + "\n" +
 out1 + quote(v3) + "\n" +
 cmd + "compiling and building <.EXE>cutable x64-DOS/Windows app...";
 // command(s)
 string cmd1 = "x86_64-w64-mingw32-g++ " + quote(v2) + " -o " + quote(v3) +
 " -fconcepts -static-libgcc -static-libstdc++ -lstdc++fs -std=c++2a -pthread"
 " -I/home/" + uname() + "/.area51/lab51cc/"
 " -include/home/" + uname() + "/.area51/lab51cc/heads-up/deb-dos.hh";
 // op(s)
 note(msg1);
 int e = sys(cmd1 + " 1>>" + v1 + " 2>>" + v1);
 if (fsize(v1)) {
  cout <<
  err1 + err2 + "\n" +
  cmd + "cat " + quote(uri(v1)[0] + "/" + v1)
  << endl;
  drop(v1, "\n\n[COMMAND] " + cmd1 + "\n");
  exit(1);
 }
 cout << out2 << endl;
 rm(v1);
}
void deb(string arg1) {
 /*  variable(s)
 [v1] log
 [v2] input
 [v3] output
 */
 string inp1 = mark("blue", "[inp] ");
 string cmd = mark("blue", "[] ");
 string out1 = mark("blue", "[out] ");
 string out2 = mark("green", "DONE.");
 string err1 = mark("red", "[ERROR |");
 string err2 = mark("yellow", "| WARNING]");
 //
 string v1 = "LOG_" + ts();
 string v2 = arg1;
 string v3 = uri(v2)[2] + "_" + ts() + ".out";
 // message(s)
 string msg1 =
 inp1 + quote(uri(v2)[1]) + "\n" +
 out1 + quote(v3) + "\n" +
 cmd + "compiling and building BINary shared-library...";
 // command(s)
 string cmd1 = "g++ " + quote(v2) + " -o " + quote(v3) +
 " -fconcepts -static-libgcc -static-libstdc++ -lstdc++fs -std=c++2a -pthread"
// " -lstdc++fs -std=c++17 -pthread -fconcepts"
 " -I/home/" + uname() + "/.area51/lab51cc/"
 " -include/home/" + uname() + "/.area51/lab51cc/heads-up/deb-dos.hh";
 // op(s)
 note(msg1);
 int e = sys(cmd1 + " 1>>" + v1 + " 2>>" + v1);
 if (fsize(v1)) {
  cout <<
  err1 + err2 + "\n" +
  cmd + "cat " + quote(uri(v1)[0] + "/" + v1)
  << endl;
  drop(v1, "\n\n[COMMAND] " + cmd1 + "\n");
  exit(1);
 }
 cout << out2 << endl;
 rm(v1);
}
void _build(string arg1, string arg2) {
 /*  variable(s)
 [v1] input-script
 [v2] operation
 */
 string v1 = arg1;
 string v2 = arg2;
 // op(s)
 if (v2 == "--cross") {
  deb(v1);
  cout << endl;
  dos64(v1);
  cout << endl;
  dos32(v1);
  exit(0);
 }
 if (v2 == "--dos32") {
  dos32(v1);
  exit(0);
 }
 if (v2 == "--dos64") {
  dos64(v1);
  exit(0);
 }
 deb(v1);
}

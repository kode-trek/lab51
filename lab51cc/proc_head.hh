/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
void _head(string arg1) {
 /* variable(s)
 [v1] switch
 [v2] source
 [v3] target
 */
 string inp1 = mark("blue", "[SOURCE] ");
 string cmd = mark("blue", "[] ");
 string out1 = mark("blue", "[TARGET] ");
 string out2 = mark("green", "DONE.");
 string err1 = mark("red", "HALTED.""\n""[FAILED] ");
 //
 string v1 = arg1;
 string v2 = "/usr/lib/lab51cc/header/heads-up/";
 string v3 = "~/.area51/lab51cc/header/";
 // message(s)
 string msg1 = cmd + "linking to <heads-up>...";
 string msg2 = cmd + "un-linking from <heads-up>...";
 // command(s)
 int e = 0;
 // op(s)
 if (v1 == "on") {
  note(msg1);
  rm(v3 + "heads-up/");
  e = cp(v2, v3);
  if (e) {
   cout <<
   inp1 + v2 + "\n" +
   out1 + v3 + "\n" +
   err1 + "file(s) not copied."
   << endl;
   exit(1);
  }
  cout << out2 << endl;
  exit(0);
 }
 if (v1 == "off") {
  note(msg2);
  rm(v3 + "heads-up/");
  if (exist(v3 + "heads-up/")) {
   cout <<
   out1 + v3 + "heads-up/""\n" +
   err1 + "file(s) not removed."
   << endl;
   exit(1);
  }
  cout << out2 << endl;
  exit(0);
 }
}

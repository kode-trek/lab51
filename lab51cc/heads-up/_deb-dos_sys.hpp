/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int sys(string arg1, ...) {
 /* variable(s)
 [v1] command
 */
// string v1 = can(arg1);
 string v1 = arg1;
 // op(s)
 #ifdef __linux__
 int e = system(v1.c_str());
 if (WIFSIGNALED(e)) {
  cout <<
  "\n" + mark("yellow", "[INTERRUPTED] ") +
  "some file(s)/task(s) may left incomplete."
  << endl;
  exit(1);
 }
 #endif
 #ifdef _WIN32
 int e = _wsystem(u8(v1).c_str());
 #endif
 return e;
}
int sys(...) {return 127;}

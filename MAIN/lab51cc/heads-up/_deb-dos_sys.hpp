/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
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
  note("[interrupted]""\n", "red");
  exit(e);
 }
 #endif
 #ifdef _WIN32
 int e = _wsystem(u8(v1).c_str());
 #endif
 return e;
}

int sys(...) {return 1;}

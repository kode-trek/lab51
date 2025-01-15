/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool md(string arg1, ...) {
 /* variable(s)
 [v1] folder-name
 */
 string v1 = can(arg1);
 // op(s)
 if (exist(v1)) return true;
 try {
  fs::create_directories(u8(v1));
  return false;
 } catch (...) {return true;}
}

bool md(...) {return true;}

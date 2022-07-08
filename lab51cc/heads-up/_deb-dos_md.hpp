/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
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

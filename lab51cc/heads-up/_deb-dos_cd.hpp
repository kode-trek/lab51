/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
bool cd(string arg1, ...) {
 /* variable(s)
 [v1] path
 */
 string v1 = can(arg1);
 // op(s)
 try {
  fs::current_path(u8(v1));
  return false;
 } catch (...) {return true;}
}
bool cd(...) {return false;}

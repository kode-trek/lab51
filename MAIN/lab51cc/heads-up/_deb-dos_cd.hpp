/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
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

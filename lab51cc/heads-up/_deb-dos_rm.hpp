/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
bool rm(string arg1, ...) {
 /* variable(s)
 [v1] file | directory
 */
 string v1 = can(arg1);
 // op(s)
 if (v1 == pwd()) return true;
 try {fs::remove_all(u8(v1)); return false;} catch (...) {return true;}
}
bool rm(...) {return false;}

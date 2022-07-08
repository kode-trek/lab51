/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
bool exist(string arg1, ...) {
 /* variable(s)
 [v1] file-path
 */
 string v1 = can(arg1);
 // op(s)
 return fs::exists(u8(v1));
}
bool exist(...) {return false;}

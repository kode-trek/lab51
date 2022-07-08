/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int blank(string arg1, ...) {
 /* variable(s)
 [v1] path
 */
 string v1 = arg1;
 v1 = can(v1);
 // op(s)
 try {return fs::is_empty(u8(v1));} catch (...) {return -1;}
}
int blank(...) {return blank(".");}

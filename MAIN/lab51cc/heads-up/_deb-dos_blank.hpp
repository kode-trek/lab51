/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int blank(string arg1, ...) {
 /* variable(s)
 [v1] file/folder
 */
 string v1 = can(arg1);
 // op(s)
 try {return fs::is_empty(u8(v1));} catch (...) {return -1;}
}

int blank(...) {return blank(pwd());}

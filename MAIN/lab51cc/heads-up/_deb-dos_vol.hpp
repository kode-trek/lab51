/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool vol(string arg1, ...) {
 /* variable(s)
 [v1] file/folder
 */
 string v1 = can(arg1);
 // op(s)
 if ((space(v1) * 1.5) < space()) return true;
 return false;
}

bool vol(...) {return false;}

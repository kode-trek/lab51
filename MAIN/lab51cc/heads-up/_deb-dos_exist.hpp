/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool exist(string arg1, ...) {
 /* variable(s)
 [v1] file/folder
 */
 string v1 = can(arg1);
 // op(s)
 return fs::exists(u8(v1));
}

bool exist(...) {return true;}

//return fs::exists(arg.c_str());

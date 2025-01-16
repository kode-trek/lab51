/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool dir(string arg1, ...) {
 /* variable(s)
 [v1] path
 */
 string v1 = can(arg1);
 // op(s)
 return fs::is_directory(u8(v1));
}

bool dir(...) {return true;}

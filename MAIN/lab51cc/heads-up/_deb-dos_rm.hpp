/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool rm(string arg1, ...) {
 /* variable(s)
 [v1] file/folder
 */
 string v1 = can(arg1);
 try {fs::remove_all(u8(v1)); return false;} catch (...) {return true;}
}

bool rm(...) {return true;}

// if (v1 == cd()) return true;

// if (v1 == pwd()) return true;
// try {fs::remove_all(u8(v1));} catch (...) {return true;}
// if (exist(v1)) return true;
// return false;


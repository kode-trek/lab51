/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool write_access(string arg1, ...) {
 /* variable(s)
 [v1] path
 [v2] temporary-file
 */
 string v1 = can(arg1);
 string v2 = "";
 v2 = v1 + "/" + ts(false);
 // op(s)
 int e = drop(v2);
 rm(v2);
 if (not e) return true;
 return false;
}

bool write_access(...) {return write_access(pwd());}

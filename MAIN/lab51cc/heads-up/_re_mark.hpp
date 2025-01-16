/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string mark(string arg1, string arg2 = "", ...) {
 #ifdef __linux__
 /* variable(s)
 [v1] text
 [v2] color
 [v3] code
 */
 string v1 = arg1;
 string v2 = arg2;
 string v3 = "00";
 if (v2 == "green") v3 = "36";
 if (v2 == "yellow") v3 = "33";
 if (v2 == "blue") v3 = "34";
 if (v2 == "red") v3 = "35";
 v1 = "\033[1;" + v3 + "m" + v1 + "\033[0m";
 // op(s)
 return v1;
 #endif
 #ifdef _WIN32
 return arg1;
 #endif
}

string mark(...) {return "";}

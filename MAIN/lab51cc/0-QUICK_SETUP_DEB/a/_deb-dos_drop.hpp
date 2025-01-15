/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool drop(string arg1, string arg2="", ...) {
 /* variable(s)
 [v1] name of text file
 [v2] text to be written into file
 [v3] file-handler
 */
 string v1 = can(arg1);
 string v2 = arg2;
 FILE *v3 = NULL;
 // op(s)
 #ifdef __linux__
 v3 = fopen(v1.c_str(), "a");
 if (not v3) return false;
 #endif
 #ifdef _WIN32
 v3 = _wfopen(u8(v1).c_str(), L"a, ccs = UTF-8"); // didn't work via WINE.
 // check for possible failure on guest/admin privilege via DOS/WINDOWS.
 #endif
 fprintf(v3, "%s", v2.c_str());
 fclose(v3);
 return false;
}

bool drop (...) {return true;}

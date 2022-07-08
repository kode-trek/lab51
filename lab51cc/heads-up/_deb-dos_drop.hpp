/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
bool drop(string arg1, string arg2 = "", ...) {
 /* variable(s)
 [v1] name-of-text-file
 [v2] text-to-be-written
 [v3] file-handler
 */
 string v1 = can(arg1);
 string v2 = arg2;
 FILE *v3 = NULL;
 #ifdef __linux__
 v3 = fopen(v1.c_str(), "a");
 #endif
 #ifdef _WIN32
 v3 = _wfopen(u8(v1).c_str(), L"a,ccs=UTF-8");
 #endif
 if (not v3) return true;
 fprintf(v3, "%s", v2.c_str());
 fclose(v3);
 return false;
}
bool drop(...) {return true;}

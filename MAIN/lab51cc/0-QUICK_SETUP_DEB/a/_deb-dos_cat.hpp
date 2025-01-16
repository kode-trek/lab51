/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string cat(string arg1, string arg2="text", ...) {
 /* variable(s)
 [v1] name of text-file
 [v2] number of row(s)
 [v3] text
 [v4] file-handler
 [v5] character
 */
 string v1 = can(arg1);
 int v2 = 1;
 string v3 = "";
 FILE* v4;
 char v5 = '\0';
 // op(s)
 #ifdef __linux__
 v4 = fopen(v1.c_str(), "r");
 #endif
 #ifdef _WIN32
 v4 = _wfopen(u8(v1).c_str(), L"r,ccs=UTF-8");
 #endif
 if (v4) {
  while ((v5 = getc(v4)) != EOF) {
   if (v5 == '\n') (v2)++;
   v3 += v5;
  }
  fclose(v4);
 }
 if (v3.size() == 0) v2 = 0;
 if ((arg2 == "nrow") and (not exist(v1))) {return "-1";}
 if (arg2 == "nrow") return str(v2);
 return v3;
}

string cat(...) {return "";}

/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
ReadTextFile cat(string arg1, ...) {
 /* variable(s)
 [v1] text-file
 [v2] text-file-struct
 [v3] file-handler
 [v4] character
 */
 string v1 = can(arg1);
 ReadTextFile v2;
 v2.nrow = 1;
 v2.txt = "";
 FILE* v3;
 char v4 = '\0';
 // op(s)
 #ifdef __linux__
 v3 = fopen(v1.c_str(), "r");
 #endif
 #ifdef _WIN32
 v3 = _wfopen(u8(v1).c_str(), L"r,ccs=UTF-8");
 #endif
 if (v3) {
  while ((v4 = getc(v3)) != EOF) {
   if (v4 == '\n') (v2.nrow)++;
   v2.txt += v4;
  }
  fclose(v3);
 }
 if ((v2.txt).size() == 0) v2.nrow = 0;
 return v2;
}

ReadTextFile cat(...) {
 /*  variable(s)
 [v1] text-file-body
 */
 ReadTextFile v1;
 v1.nrow = 0;
 v1.txt = "";
 // op(s)
 return v1;
}

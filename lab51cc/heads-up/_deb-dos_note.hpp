/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
void note(string arg1 = "", string arg2 = "", ...) {
 #ifdef __linux__
 /* variable(s)
 [v1] text
 [v2] code
 [v3] clue
 */
 string v1 = arg1;
 string v2 = "00";
 string v3 = arg2;
 if (v3 == "go") v2 = "32";
 if (v3 == "warn") v2 = "33";
 if (v3 == "info") v2 = "34";
 if (v3 == "stop") v2 = "35";
 // op(s)
 if (v3 == "") cout << v1;
 if (v3 != "") cout << "\033[1;" + v2 + "m" + v1 + "\033[0m";
 cin.sync();
 #endif
 #ifdef _WIN32
 /* variable(s)
 [v1] color
 [v2] code
 [v3] text
 [v4] standard-output-handle
 */
 string v1 = arg1;
 int v2 = 0;
 string v3 = arg2;
 HANDLE v4 = GetStdHandle(STD_OUTPUT_HANDLE);
 if (v3 == "go") v2 = 2;
 if (v3 == "info") v2 = 9;
 if (v3 == "stop") v2 = 12;
 if (v3 == "warn") v2 = 14;
 // op(s)
 SetConsoleTextAttribute(v4, v2 | 0);
 cout << v3;
 cin.sync();
 SetConsoleTextAttribute(v4, 7 | 0);
 #endif
}
void note(...) {
 cout << "";
 cin.sync();
}

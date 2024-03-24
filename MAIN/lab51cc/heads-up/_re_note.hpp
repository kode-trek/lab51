/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

#ifdef __linux__
string note(string arg1, string arg2, ...) {
 /* variable(s)
 [v1] color
 [v2] code
 [v3] text
 */
 string v1 = arg1;
 string v2 = "00";
 string v3 = arg2;
 if (v1 == "green") v2 = "32";
 if (v1 == "yellow") v2 = "33";
 if (v1 == "blue") v2 = "34";
 if (v1 == "red") v2 = "35";
 v3 = "\033[1;" + v2 + "m" + v3 + "\033[0m";
 // op(s)
 return v3;
}
#endif
#ifdef _WIN32
void note(string arg1, string arg2, ...) {
 string v1 = arg1;
 int v2 = 0;
 string v3 = arg2;
 if (v1 == "green") v2 = "2";
 if (v1 == "yellow") v2 = "14";
 if (v1 == "blue") v2 = "9";
 if (v1 == "red") v2 = "12";
 HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(hStdOut, v2 | 0);
 disp(v3);
 SetConsoleTextAttribute(hStdOut, 7 | 0);
#endif
string note(...) {return "";}
void note(...) {}

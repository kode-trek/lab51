/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool note(string arg1, string arg2 = "", ...) {
 #ifdef __linux__
 /* variable(s)
 [v1] text
 [v2] code
 [v3] color
 */
 string v1 = arg1;
 string v2 = "00";
 string v3 = arg2;
 if (v3 == "lemon-ink") v2 = "8";
 if (v3 == "yellow") v2 = "33";
 if (v3 == "blue") v2 = "34";
 if (v3 == "red") v2 = "35";
 if (v3 == "green") v2 = "36";
 // op(s)
 if (v3 == "") cout << v1;
 if (v3 != "") cout << "\033[1;" + v2 + "m" + v1 + "\033[0m";
 cin.sync();
 #endif
 #ifdef _WIN32
 /* variable(s)
 [v1] text
 [v2] code
 [v3] color
 [v4] hConsole
 */
 string v1 = arg1;
 int v2 = 15;
 string v3 = arg2;
 HANDLE v4 = GetStdHandle(STD_OUTPUT_HANDLE);
 if (v3 == "lemon-ink") v2 = 0;
 if (v3 == "blue") v2 = 11;
 if (v3 == "green") v2 = 10;
 if (v3 == "red") v2 = 13;
 if (v3 == "yellow") v2 = 14;
 // op(s)
 SetConsoleTextAttribute(v4, v2 | 0);
 cout << v1;
 cin.sync();
 SetConsoleTextAttribute(v4, 7 | 0);
 #endif
 return false;
}

bool note(...) {
 cout << "";
 cin.sync();
 return false;
}

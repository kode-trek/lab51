/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool has(string arg1, string arg2, ...) {
 /* variable(s)
 [v1] text
 [v2] search-term
 [found] result
 */
 string v1 = arg1;
 string v2 = arg2;
 size_t found = 0;
 // op(s)
 found = arg1.find(arg2);
 if (found != string::npos) return true;
 return false;
}

bool has(string arg1, char arg2, ...) {
 /* variable(s)
 [v1] text
 [v2] search-term
 [found] result
 */
 string v1 = arg1;
 char v2 = arg2;
 size_t found = 0;
 // op(s)
 found = arg1.find(arg2);
 if (found != string::npos) return true;
 return false;
}

bool has(...) {return 0;}

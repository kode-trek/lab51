/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string shortq(string arg1, ...) {
 /* variable(s)
 [v1] text
 [v2] first-3-letters
 [v3] last-3-letters
 */
 string v1 = arg1;
 string v2, v3 = "";
 if (strlen(v1.c_str()) > 16) {
  v2 = v1.substr(0, 8);
  v3 = v1.substr(strlen(v1.c_str()) - 8, strlen(v1.c_str()) - 1);
 }
 // op(s)
 if (strlen(v1.c_str()) <= 16) return v1;
 return (v2 + "..." + v3);
}

string shortq(...) {return "";}

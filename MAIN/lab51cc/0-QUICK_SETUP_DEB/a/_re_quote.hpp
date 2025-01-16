/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string quote(string arg1, ...) {
 /* variable(s)
 [v1] text
 */
 string v1 = arg1;
 // op(s)
 return "\"" + v1 + "\"";
}

string quote(...) {return "";}

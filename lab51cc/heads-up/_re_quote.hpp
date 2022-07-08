/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
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

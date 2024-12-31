/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string upper(string arg1, ...) {
 /* variable(s)
 [v1] text
 */
 string v1 = arg1;
 // op(s)
 transform(v1.begin(), v1.end(), v1.begin(), ::toupper);
 return v1;
}

string upper(...) {return "";}

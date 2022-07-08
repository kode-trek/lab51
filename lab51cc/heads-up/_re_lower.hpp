/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
string lower(string arg1, ...) {
 /* variable(s)
 [v1] text
 */
 string v1 = arg1;
 // op(s)
 transform(v1.begin(), v1.end(), v1.begin(), ::tolower);
 return v1;
}
string lower(...) {return "";}

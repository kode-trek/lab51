/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

vector<string> nsort(vector<string> arg1, ...) {
 SI::natural::sort(arg1);
 return arg1;
}

vector<string> nsort(...) {return {};}

/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

vector<float> nsort(vector<float> arg1, ...) {
 vector<string> v1 = str(arg1);
 vector<float> v2 = {};
 SI::natural::sort(v1);
 v2 = str2num(v1);
 return v2;
}

vector<string> nsort(vector<string> arg1, ...) {
 SI::natural::sort(arg1);
 return arg1;
}

vector<string> nsort(...) {return {};}

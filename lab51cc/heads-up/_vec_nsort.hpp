/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
vector<string> nsort(vector<string> arg1, ...) {
 SI::natural::sort(arg1);
 return arg1;
}
vector<string> nsort(...) {return {};}

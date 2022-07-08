/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 cout <<
 "HAS-WRITE-PERMISSION [PATH]""\n"
 "bool write_access (string)""\n"
 "===========================""\n"
 << endl;
 //op(s)
 cout <<
 write_access() << endl <<
 write_access("/") << endl <<
 write_access("~") << endl <<
 write_access(ts())
 << endl;
}

/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 string wd = ts(); md(wd); cd(wd);
 cout <<
 "SIZE [FILE | DIRECTORY] [IN: " << wd << "]""\n"
 "auto fsize (string)""\n"
 "ifstream::pos_type fsize (string)""\n"
 "========================================""\n"
 << endl;
 //op(s)
 cout << fsize() << endl;
 //
 drop("F1"); cout << fsize("F1") << endl;
 //
 drop("F1", "Line#1"); cout << fsize("F1") << endl;
 //
 md("D1"); cout << fsize("D1") << endl;
 //
 mv("F1", "D1"); cout << fsize("D1") << endl;
 #ifdef __linux__
 sys("du -h D1/");
 #endif
 cout << fsize("پارسی.txt") << endl;
 //cleans-up
 k2c(); cd(".."); rm(wd);
}

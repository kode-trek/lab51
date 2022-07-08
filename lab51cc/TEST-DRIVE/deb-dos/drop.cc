/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 string wd = ts(); md(wd); cd(wd);
 cout <<
 "WRITE-TEXT-FILE [NAME] [CONTENT] [IN: " << wd << "]""\n"
 "bool drop (string, string)""\n"
 "=================================================""\n"
 << endl;
 //var(s)
 string f1 = "F_" + ts();
 //op(s)
 cout << drop() << endl;
 //
 cout << drop("F") << endl; k2c();
 //
 cout << drop("F", "Line#1") << endl; k2c();
 cout << drop("/" + tmpf) << endl;
 //
 cout << drop("F", "\n""پارسی را پاس بداریم") << endl; k2c();
 cout << drop("پارس", "Line#1") << endl;
 //
 #ifdef _WIN32
 cout << drop(L"پارس.txt", "Line#1") << endl; k2c();
 cout << drop(L"پارس.txt", L"\n""فارسی آسان است!") << endl; k2c();
 #endif
 #ifdef _linux_
 cout << drop("پارس ها", "Line#1") << endl; k2c();
 cout << drop("پارس ها", "\n""فارسی آسان است!") << endl; k2c();
 #endif
 //cleans-up
 k2c(); cd(".."); rm(wd);
}


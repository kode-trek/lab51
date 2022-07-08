/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 string wd = ts();
 md(wd);
 cd(wd);
 cout <<
 "IS-DIRECTORY [PATH-TO- FILE | DIRECTORY]""\n"
 "bool dir (string)""\n"
 "========================================""\n"
 << endl;
 // op(s)
 cout << dir() << endl;
 cout << "----" << endl;
 //
 cout << dir("~") << endl;
 cout << "----" << endl;
 //
 drop("file.txt");
 cout << dir("file.txt") << endl;
 cout << "----" << endl;
 //
 md("پارسا");
 cout << dir("پارسا") << endl;
 cout << "----" << endl;
 //
 cout << dir("C:\\") << endl;
 cout << "----" << endl;
 //
 cout << dir("Z:\\") << endl;
 cout << "----" << endl;
 //
 cout << dir(R"(%SystemRoot%)") << endl;
 cout << "----" << endl;
 // cleans-up
 pausee();
 cd("..");
 rm(wd);
}

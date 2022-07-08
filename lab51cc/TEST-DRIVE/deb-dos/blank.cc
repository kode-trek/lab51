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
 "IS-EMPTY [FILE/DIRECTORY-PATH] [IN: " + str(wd) + "]""\n"
 "bool blank (string)""\n"
 "==================================================""\n"
 << endl;
 // op(s)
 cout << blank() << endl;
 cout << "----" << endl;
 //
 cout << blank(ts()) << endl;
 cout << "----" << endl;
 //
 cout << blank("~") << endl;
 cout << "----" << endl;
 //
 cout << blank("C:\\") << endl;
 cout << "----" << endl;
 //
 md("empty-directory");
 cout << blank("empty-directory") << endl;
 cout << "----" << endl;
 //
 drop("empty-file.txt");
 cout << blank("empty-file.txt") << endl;
 cout << "----" << endl;
 //
 drop("non-empty-file.txt", "Line#1");
 cout << blank("non-empty-file.txt") << endl;
 cout << "----" << endl;
 //
 md("پارسی");
 mv("empty-file.txt", "پارسی");
 cout << blank("پارسی") << endl;
 cout << "----" << endl;
 //
 cout << blank() << endl;
 // cleans-up
 pausee();
 cd("..");
 rm(wd);
}

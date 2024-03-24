/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 if (not write_access()) {
  cout <<
  mark("[out] ", "blue") << pwd() << "\n" <<
  mark("[WARNING] ", "yellow") << "write-permission denied."
  << endl;
 }
 string wd = ts();
 md(wd);
 cd(wd);
 cout <<
 "IS-DIRECTORY [FILE/FOLDER]""\n"
 "bool dir (string)""\n"
 "===========================""\n"
 << endl;
 // op(s)
 cout << dir("~") << endl;
 cout << "----" << endl;
 //
 drop("f1");
 cout << dir("f1") << endl;
 cout << "----" << endl;
 //
 cout << dir("non-available-file-or-folder") << endl;
 cout << "----" << endl;
// //
// cout << dir("C:\\") << endl;
// cout << "----" << endl;
// //
// cout << dir("Z:\\") << endl;
// cout << "----" << endl;
// //
// cout << dir(R"(%SystemRoot%)") << endl;
// cout << "----" << endl;
 // cleans-up
 pausee();
 cd("..");
 rm(wd);
}

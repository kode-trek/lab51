/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "EXISTS [FILE | FOLDER]""\n"
 "bool exist (string)""\n"
 "=======================""\n"
 << endl;
 // variable(s)
 string v1 = ts();
 // op(s)
 cout << exist("non-available-file-or-folder") << endl;
 //
 drop(v1);
 cout << exist(v1) << endl;
//  cout << exist("C:\\") << endl;
// cout << exist("Z:\\") << endl;
// cout << exist(R"(%SystemRoot%)") << endl;
 // clean-up
 pausee();
 rm(v1);
}

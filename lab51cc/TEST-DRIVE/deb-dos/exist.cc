/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 cout <<
 "EXISTS [FILE | DIRECTORY]""\n"
 "bool exist (string)""\n"
 "=========================""\n"
 << endl;
 //var(s)
 string f1 = "پارسی.txt";
 //op(s)
 cout << exist() << endl;
 cout << exist(ts()) << endl;
 //
 drop(f1); cout << exist(f1) << endl;
 //
 cout << exist("~") << endl;
  cout << exist("C:\\") << endl;
 cout << exist("Z:\\") << endl;
 cout << exist(R"(%SystemRoot%)") << endl;
 //cleans-up
 k2c(); rm(f1);
}

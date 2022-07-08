/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 cout <<
 "HIGHLIGHT [COLOR] [TEXT]""\n"
 "string mark(string, string)""\n"
 "==========================="
 << endl;
 // op(s)
 cout << mark("red", "hello, world!") << endl;
 cout << "----" << endl;
 //
 cout << mark("green", "hello, world!") << endl;
 cout << "----" << endl;
 //
 cout << mark("blue", "hello, world!") << endl;
 cout << "----" << endl;
 //
 cout << mark("yellow", "hello, world!") << endl;
 cout << "----" << endl;
 //
 cout << mark("yellow", "پارسی را پاس بداریم!") << endl;
 cout << "----" << endl;
 // not-available-color
 cout << mark("cyan", "hello, world!") << endl;
}

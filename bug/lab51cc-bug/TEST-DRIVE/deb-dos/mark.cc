/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "HIGHLIGHT [TEXT] [COLOR]""\n"
 "string mark(string, string)""\n"
 "==========================="
 << endl;
 // op(s)
 cout << mark("hello, world!", "red") << endl;
 cout << "----" << endl;
 //
 cout << mark("hello, world!", "green") << endl;
 cout << "----" << endl;
 //
 cout << mark("hello, world!", "blue") << endl;
 cout << "----" << endl;
 //
 cout << mark("hello, world!", "yellow") << endl;
 cout << "----" << endl;
 // not-available-color
 cout << mark("hello, world!", "cyan") << endl;
}

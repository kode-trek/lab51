/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "SHORTEN-QUOTE [TEXT]""\n"
 "string shortq (string)""\n"
 "====================="
 << endl;
 // op(s)
 cout << shortq("") << endl;
 cout << "----" << endl;
 cout << shortq(" ") << endl;
 cout << "----" << endl;
 cout << shortq("foo bar") << endl;
 cout << "----" << endl;
 cout << shortq("foooooooooooooob") << endl;
 cout << "----" << endl;
 cout << shortq("foooooooooooooobar") << endl;
}

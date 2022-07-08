/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 cout <<
 "SHORTEN-QUOTE [TEXT]""\n"
 "string shortq(string)""\n"
 "====================="
 << endl;
 // op(s)
 cout << shortq() << endl;
 cout << "----" << endl;
 cout << shortq("") << endl;
 cout << "----" << endl;
 cout << shortq(" ") << endl;
 cout << "----" << endl;
 cout << shortq("foo bar") << endl;
 cout << "----" << endl;
 cout << shortq("foooooooooooooob") << endl;
 cout << "----" << endl;
 cout << shortq("foooooooooooooobar") << endl;
 cout << "----" << endl;
 cout << shortq("پارسی را پاس بداریم!") << endl;
}

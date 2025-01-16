/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "SPLITTER [TEXT] [DELIMITER]""\n"
 "vector<string> split(string, string)""\n"
 "===================================="
 << endl;
 // op(s)
 enlist(split(""));
 cout << "----" << endl;
 //
 enlist(split(" "));
 cout << "----" << endl;
 //
 enlist(split("foo,bar,baz"));
 cout << "----" << endl;
 //
 enlist(split("foo, bar, baz"));
 cout << "----" << endl;
 //
 enlist(split("foo\tbar\tbaz"));
 cout << "----" << endl;
 //
 enlist(split("foo\tbar\tbaz", "\t"));
 cout << "----" << endl;
 //
 enlist(split("foo,bar,baz", ','));
 cout << "----" << endl;
 //
 enlist(split("foo,bar,baz", "@"));
}

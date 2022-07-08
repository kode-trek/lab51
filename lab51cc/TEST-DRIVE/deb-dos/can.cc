/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 cout <<
 "WILDCARD [PATH]""\n"
 "void can (string)""\n"
 "==================""\n"
 << endl;
 /* variable(s)
 [v1] path
 */
 string v1 = "";
 // op(s)
 v1 = "";
 cout << v1 << endl;
 v1 = can();
 cout << v1 << endl;
 cout << "----" << endl;
 //
 v1 = "";
 cout << v1 << endl;
 v1 = can(1);
 cout << v1 << endl;
 cout << "----" << endl;
 //
 v1 = "";
 cout << v1 << endl;
 v1 = can(1, 3.14);
 cout << v1 << endl;
 cout << "----" << endl;
 //
 v1 = "";
 cout << v1 << endl;
 v1 = can(false);
 cout << v1 << endl;
 cout << "----" << endl;
 //
 v1 = ".";
 cout << v1 << endl;
 v1 = can(v1);
 cout << v1 << endl;
 cout << "----" << endl;
 //
 v1 = "./";
 cout << v1 << endl;
 v1 = can(v1);
 cout << v1 << endl;
 cout << "----" << endl;
 //
 v1 = ".//";
 cout << v1 << endl;
 v1 = can(v1);
 cout << v1 << endl;
 cout << "----" << endl;
 //
 v1 = "./.wine";
 cout << v1 << endl;
 v1 = can(v1);
 cout << v1 << endl;
 cout << "----" << endl;
 //
 v1 = "/.wine";
 cout << v1 << endl;
 v1 = can(v1);
 cout << v1 << endl;
 cout << "----" << endl;
 //
 v1 = "~";
 cout << v1 << endl;
 v1 = can(v1);
 cout << v1 << endl;
 cout << "----" << endl;
 //
 v1 = "~/.wine";
 cout << v1 << endl;
 v1 = can(v1);
 cout << v1 << endl;
 cout << "----" << endl;
 //
 v1 = "~/[) gibberish namin':file @~چی";
 cout << v1 << endl;
 v1 = can(v1);
 cout << v1 << endl;
 //
 v1 = u8("../چی");
 cout << v1 << endl;
 md(v1);
 v1 = can(v1);
 cout << v1 << endl;
 pausee();
 rm(v1);
}

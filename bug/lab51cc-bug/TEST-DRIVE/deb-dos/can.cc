int main() {
 cout <<
 "WILDCARD [PATH]""\n"
 "void can (string)""\n"
 "=================""\n"
 << endl;
 // op(s)
 cout << "./.area51" << endl;
 cout << can("./.area51") << endl;
 cout << "----" << endl;
 //
 cout << "~/[) gibberish namin':file @~چی" << endl;
 cout << can("~/[) gibberish namin':file @~چی") << endl;
 cout << "----" << endl;
 //
 cout << "~/Downloads/../Music" << endl;
 cout << can("~/Downloads/../Music") << endl;
 //
 cout << can("/") << endl;
 cout << can("c:/") << endl;
 if (can("c:/") == "c:\\") cout << "YES" << endl;
 cout << can("c:\\پارسی") << endl;
 cout << can("پارسی") << endl;
 cout << "پارسی" << endl;
 if (can("پارسی") == "پارسی") cout << "Y" << endl;
}

/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main(int argc, char* argv[]) {
 cout <<
 "ANY-TO-STRING [ENTRY]""\n"
 "string str(auto)""\n"
 "vector<string> str(vector<auto>)""\n"
 "================================"
 << endl;
 /* variable(s)
 [v1] integer-vector
 [v2] float-vector
 [v3] non-ascii-string-vector
 */
 vector<int> v1 = {1, 2, 3};
 vector<float> v2 = {1.0, 2.0, 3.0};
 vector<string> v3 = {"پارسی", "می گفت"};
 // op(s)
 cout << str("") + "ABC" << endl;
 cout << "----" << endl;
 //
 cout << str("foo") + "ABC" << endl;
 cout << "----" << endl;
 //
 cout << str("foo bar") + "ABC" << endl;
 cout << "----" << endl;
 //
 cout << str("arg1", "arg2") + "ABC" << endl;
 cout << "----" << endl;
 //
 cout << str(0, "arg2") + "ABC" << endl;
 cout << "----" << endl;
 //
 cout << str(1, "arg2") + "ABC" << endl;
 cout << "----" << endl;
 //
 cout << str(false) + "ABC" << endl;
 cout << "----" << endl;
 //
 cout << str(true) + "ABC" << endl;
 cout << "----" << endl;
 //
 cout << str(false, "arg2") + "ABC" << endl;
 cout << "----" << endl;
 //
 cout << str(true, "arg2") + "ABC" << endl;
 cout << "----" << endl;
 //
 cout << str(3.14) + "ABC" << endl;
 cout << "----" << endl;
 //
 cout << str("پارسا") + "ABC" << endl;
 cout << "----" << endl;
 //
 cout << str("پرس") + "پولیس" << endl;
 cout << "----" << endl;
 //
 enlist(str(v1));
 cout << "----" << endl;
 //
 enlist(str(v2));
 cout << "----" << endl;
 //
 enlist(str(v3));
 cout << "----" << endl;
 //
 if ((argc > 1) and (str(argv[1]) == "foo")) cout << argv[1] << endl;
}

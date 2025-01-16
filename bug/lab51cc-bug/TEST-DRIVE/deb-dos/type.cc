/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "TYPE [ENTRY]""\n"
 "string type(auto)""\n"
 "================="
 << endl;
 /* variable(s)
 [v1] string-vector
 [v2] integer-vector
 [v3] float-vector
 [v4] bool-vector
 */
 vector<string> v1 = {};
 vector<int> v2 = {};
 vector<float> v3 = {};
 vector<bool> v4 = {};
 // op(s)
 cout << type() << endl;
 cout << "----" << endl;
 //
 cout << type("") << endl;
 cout << "----" << endl;
 //
 cout << type("c") << endl;
 cout << "----" << endl;
 //
 cout << type('c') << endl;
 cout << "----" << endl;
 //
 cout << type('\t') << endl;
 cout << "----" << endl;
 //
// cout << type('گ') << endl;
 cout << "----" << endl;
 //
 cout << type("گ") << endl;
 cout << "----" << endl;
 //
 cout << type("foo") << endl;
 cout << "----" << endl;
 //
 cout << type("foo bar") << endl;
 cout << "----" << endl;
 //
 cout << type("پارسی را پاس بداریم!") << endl;
 cout << "----" << endl;
 //
 cout << type(2) << endl;
 cout << "----" << endl;
 //
 cout << type(3.14) << endl;
 cout << "----" << endl;
 //
 cout << type(0) << endl;
 cout << "----" << endl;
 //
 cout << type(1) << endl;
 cout << "----" << endl;
 //
 cout << type(false) << endl;
 cout << "----" << endl;
 //
 cout << type(true) << endl;
 cout << "----" << endl;
 //
// cout << type({"1", "2", "3"}) << endl;
 cout << "----" << endl;
 //
 v1 = {"1", "2", "3"};
 cout << type(v1) << endl;
 cout << "----" << endl;
 //
 v2 = {1, 2, 3};
 cout << type(v2) << endl;
 cout << "----" << endl;
 //
 v3 = {1.0, 2.0, 3.0};
 cout << type(v3) << endl;
 cout << "----" << endl;
 //
 v4 = {true, false, true};
 cout << type(v4) << endl;
 cout << "----" << endl;
 //
 cout << type("arg1", "arg2") << endl;
}

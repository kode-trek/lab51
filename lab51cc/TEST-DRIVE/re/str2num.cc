/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 cout <<
 "STRING-TO-NUMBER [TEXT]""\n"
 "float str2num(string)""\n"
 "======================="
 << endl;
 /* variable(s)
 [v1] string-variable
 [v2] float-variable
 */
 vector<string> v1 = {};
 vector<float> v2 = {};
 // op(s)
 cout << str2num() << endl;
 cout << "----" << endl;
 //
 cout << str2num() + 1 << endl;
 cout << "----" << endl;
 //
 cout << str2num("2.14") + 1 << endl;
 cout << "----" << endl;
 // [v1] could be read from a text-file.
 v1 = {"0.0", "4.9", "-100"};
 enlist(v1);
 for (int i = 0; i < v1.size(); i++) v2.push_back(str2num(v1[i]) + 0.1);
 cout << "--" << endl;
 enlist(str(v2));
}

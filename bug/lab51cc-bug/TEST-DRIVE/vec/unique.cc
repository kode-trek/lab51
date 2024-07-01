/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "UNIQUE [LIST]""\n"
 "vector<string> unique (vector<string>)""\n"
 "======================================"
 << endl;
 /* variable(s)
 [v1] string-vector
 [v2] integer-vector
 [v3] float-vector
 [v4] non-ascii-string-vector
 */
 vector<string> v1 = {};
 vector<int> v2 = {1, 1, 0, 1, 0, 0, 0, 1};
 vector<float> v3 = {1.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0};
 vector<string> v4 = {"پارسی", "بلد است", "پارسی"};
 // op(s)
 v1 = unique();
 enlist(v1, false);
 cout << "----" << endl;
 //
 enlist(unique({}), false);
 cout << "----" << endl;
 //
 enlist(unique({""}), false);
 cout << "----" << endl;
 //
 enlist(unique({"", " ", "", "  "}), false);
 cout << "----" << endl;
 //
 v1 = {"1", "1", "0", "1", "0", "0", "0", "1"};
 v1 = unique(v1);
 enlist(v1);
 cout << "----" << endl;
 //
 enlist(unique({"1", "1", "0", "1", "0", "0", "0", "1"}));
 cout << "----" << endl;
 //
 enlist(unique(str(v2)));
 cout << "----" << endl;
 //
 enlist(unique(str(v3)));
 cout << "----" << endl;
 //
 enlist(unique(v4));
 cout << "----" << endl;
 //
 if (unique(v4)[1] == "پارسی") cout << "YES" << endl;
 if (unique(v4)[1] == "پارسا") cout << "NO" << endl;
}

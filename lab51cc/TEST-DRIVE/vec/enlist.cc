/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 cout <<
 "ENLIST [LIST] [NEAT]""\n"
 "void enlist(vector<string>, bool)""\n"
 "================================="
 << endl;
 /* variable(s)
 [v1] vector-of-string(s)
 [v2] vector-of-integer(s)
 */
 vector<string> v1 = {};
 vector<int> v2 = {1, 2, 3, 4, 5};
 // op(s)
 enlist();
 cout << "----" << endl;
 //
 enlist({});
 cout << "----" << endl;
 //
 enlist({""});
 cout << "----" << endl;
 //
 enlist({"foo", "bar", "baz"});
 cout << "----" << endl;
 //
 enlist({"آیتم-۱", "آیتم-۲", "آیتم-۳", "آیتم-۴", "آیتم-۵"});
 cout << "----" << endl;
 // non-string-entry
// enlist({1, 2, 3, 4, 5});
// cout << "--" << endl;
 enlist(v2);
 cout << "--" << endl;
 enlist(1, 2, 3, 4, 5);
 cout << "--" << endl;
 enlist(str(v2));
 cout << "----" << endl;
 //
 enlist(v1, false);
 cout << "--" << endl;
 enlist(v1, true);
 cout << "--" << endl;
 enlist(v1);
 cout << "----" << endl;
 //
 v1 = {""};
 enlist(v1, false);
 cout << "--" << endl;
 enlist(v1, true);
 cout << "--" << endl;
 enlist(v1);
 cout << "----" << endl;
 //
 v1 = {"item-1", "item-2", "item-3", "item-4"};
 enlist(v1, false);
 cout << "--" << endl;
 enlist(v1, true);
 cout << "--" << endl;
 enlist(v1);
 cout << "----" << endl;
 //
 v1 = {"item-1", "item-2", "item-3", "item-4", "item-5"};
 enlist(v1, false);
 cout << "--" << endl;
 enlist(v1, true);
 cout << "--" << endl;
 enlist(v1);
 cout << "----" << endl;
 //
 v1 = {"آیتم-۱", "آیتم-۲", "آیتم-۳", "آیتم-۴", "آیتم-۵"};
 enlist(v1, false);
 cout << "--" << endl;
 enlist(v1, true);
 cout << "--" << endl;
 enlist(v1);
}

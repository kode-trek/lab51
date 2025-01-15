/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "SORT [LIST]""\n"
 "vector<string> nsort (vector<string>)""\n"
 "====================================="
 << endl;
 /* variable(s)
 [v1] vector-of-integer(s)
 [v2] vector-of-character(s)
 [v3] vector-of-string(s)
 [v4] vector-of-non-ascii-string(s)
 */
 vector<int> v1 = {2, 1, 3};
 vector<char> v2 = {};
 vector<string> v3 = {};
 vector<string> v4 = {
 "one", "two", "<foo>", "foo", "Bar", "bar", "<bar>", "10", "01", "-01", "0100",
 "~", "[", "1a", "1b", "2a", "1z", "1ب", "",
 "Three", "علی" ,"امیر", "The از مدرسه آمد.",
 "baba", "The امیر", "The علی"
 };
 // op(s)
 nsort({});
 cout << "----" << endl;
 //
 nsort({""});
 cout << "----" << endl;
 //
 enlist({"2", "1", "3"});
 cout << "--" << endl;
 enlist(nsort({"2", "1", "3"}));
 cout << "----" << endl;
 //
 enlist(str(v1));
 cout << "--" << endl;
 enlist(nsort(str(v1)));
 cout << "----" << endl;
 //
// enlist(nsort({'a', 't', 'n'}));
 cout << "--" << endl;
 v2 = {'a', 't', 'n'};
 enlist(str(v2));
 cout << "--" << endl;
 enlist(nsort(str(v2)));
 cout << "--" << endl;
 enlist(nsort({"a", "t", "n"}));
 cout << "--" << endl;
 v3 = {"a", "t", "n"};
 v3 = nsort(v3);
 enlist(v3);
 cout << "----" << endl;
 //
 enlist(v4, false);
 cout << "--" << endl;
 enlist(nsort(v4), false);
}

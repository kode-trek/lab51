/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 cout <<
 "TREE [PATH] [MULTI-LEVEL]""\n"
 "vector<string> tree (string, bool)""\n"
 "==================================""\n"
 << endl;
 //op(s)
 enlist(tree()); cout << endl;
 //
 enlist(tree("~/Desktop")); cout << endl;
 //
 enlist(tree("~/Desktop", false)); cout << endl;
 //
 enlist(tree("~/Desktop", true), false); cout << endl;
}
// Too many open files.
//> ulimit -n 65535; ./tree

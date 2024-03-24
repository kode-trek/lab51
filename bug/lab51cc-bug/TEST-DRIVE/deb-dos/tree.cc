/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
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

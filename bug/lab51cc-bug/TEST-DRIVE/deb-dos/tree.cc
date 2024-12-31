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

int main() {
// enlist(tree());
// enlist(tree("~/Desktop"));
// enlist(tree("~/Desktop", false));
 enlist(tree("~", true), false);
 cout << tree("~", true).size() << endl;
 pausee();
}
// Too many open files.
//> ulimit -n 65535; ./tree 

//too many files in windows crashed and returns this error:

//C:\Documents and Settings\Administrator\Desktop>q_x32_1712934213.exe
//terminate called after throwing an instance of 'std::filesystem::__cxx11::filesystem_error'
// what():  filesystem error: cannot increment recursive directory iterator: Invalid argument

//This application has requested the Runtime to terminate it in an unusual way.
//Please contact the application's support team for more information.

//the line was:

//cout << tree("c:/", true).size() << endl;


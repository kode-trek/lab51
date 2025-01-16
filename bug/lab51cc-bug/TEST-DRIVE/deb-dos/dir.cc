int main() {
 cout <<
 "IS-DIRECTORY [FILE/FOLDER]""\n"
 "bool dir (string)""\n"
 "===========================""\n"
 << endl;
 // op(s)
 cout << dir("~") << endl;
 cout << "----" << endl;
 //
 cout << dir("dir.cc") << endl;
 cout << "----" << endl;
 //
 cout << dir("non-available-file-or-folder") << endl;
 cout << "----" << endl;
// cout << dir(R"(%SystemRoot%)") << endl;
// cout << "----" << endl;
}

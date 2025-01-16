int main() {
 cout <<
 "EXISTS [FILE | FOLDER]""\n"
 "bool exist (string)""\n"
 "=======================""\n"
 << endl;
 // op(s)
 cout << exist("non-available-file-or-folder") << endl;
 //
 cout << exist("~") << endl;
//  cout << exist("C:\\") << endl;
// cout << exist("Z:\\") << endl;
// cout << exist(R"(%SystemRoot%)") << endl;
}

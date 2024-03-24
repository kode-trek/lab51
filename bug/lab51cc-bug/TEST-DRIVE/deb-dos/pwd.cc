/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "DISPLAY-CURRENT-WORKING-DIRECTORY""\n"
//	"PRINT-WORKING-DIRECTORY""\n"
 "string pwd (void)""\n"
 "=================================""\n"
 << endl;
 //var(s)
 string cwd = pwd();
 //op(s)
 cout << pwd() << endl;
 //
 cd("/"); cout << pwd() << endl;
 //
 cd(cwd); cout << pwd() << endl;
}

//#ifdef _WIN32
//bool f1(string arg1) {
// fs::current_path(u8(arg1));
// return 1;
//}
//#endif

//#ifdef __linux__
//bool f1(string arg1) {
// fs::current_path(arg1);
// return 1;
//}
//#endif

//int main() {
// cout << f1("C:/پارسا") << endl;
// cout << pwd() << endl;
//}

// cout << fs::is_empty(u8(fs::current_path())) << endl;


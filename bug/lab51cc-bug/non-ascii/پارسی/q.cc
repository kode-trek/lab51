bool cwd(string arg1, ...) {
 #ifdef __linux__
 if (fs::current_path() == arg1) return true;
 return false;
 #endif
 #ifdef _WIN32
 char v1[MAXPATHLEN];
 getcwd(v1, sizeof(v1));
 if (u8(v1) == u8(arg1.c_str())) return true;
 return false;
 #endif
}

bool cwd(...) {return false;}

string pwd_(...) {
 try {return u8(fs::current_path());} catch (...) {return "";}
// #ifdef __linux__
// try {return fs::current_path();} catch (...) {return "";}
// #endif
// #ifdef _WIN32
// /* variable(s)
// [v1] maximum-path-length
// */
// char v1[MAXPATHLEN];
// // op(s)
// return (getcwd(v1, sizeof(v1)) ? u8(v1) : string(""));
// #endif
}


int main() {
// cout << pwd() << endl;
// if (cwd("/home/kode-trek/Music/پارسی")) cout << "YES" << endl;
// cout << "====" << endl;
 cout << pwd_() << endl;
 if (pwd_() == "/home/kode-trek/Music/پارسی") cout << "YES" << endl;
 cout << exist(pwd_() + "test") << endl;
}

//‘const char [11]’ to ‘char [260]’

// char* v2 = strdup(v1);
// cout << string(v2) << endl;

// #ifdef _WIN32
// /* variable(s)
// [v1] maximum-path-length
// */
// char v1[MAXPATHLEN];
// // op(s)
// return (getcwd(v1, sizeof(v1)) ? string(v1) : string(""));
// #endif

//int main() {
// cd("Music");
// cout << pwd() << endl;
// cout << fs::current_path() << endl;
//}

///home/kode-trek/Music
//"/home/kode-trek/Music"

//int main() {
// mkdir("t");
// cd("t");
// cout << pwd() << endl;
// fs::remove_all("../t");
// pausee();
// cout << pwd() << endl;
//}


//string pwd_(...) {
// try {return fs::current_path().string();} catch (...) {return "";}
//// #ifdef __linux__
//// try {return fs::current_path().string();} catch (...) {return "";}
//// #endif
//// #ifdef _WIN32
//// /* variable(s)
//// [v1] maximum-path-length
//// */
//// char v1[MAXPATHLEN];
//// // op(s)
//// return (getcwd(v1, sizeof(v1)) ? string(v1) : string(""));
//// #endif
//}


//int main() {
// cout << pwd_() << endl;
// if (u8(pwd_()) == u8("/home/kode-trek/Music/پارسی")) cout << "YES" << endl;
//}



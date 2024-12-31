/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

#ifdef _WIN32
bool drop (string arg1, string arg2 = "", ...) {
 /* variable(s)
 [v1] name of text file
 [v2] text to be written into file
 */
 string v1 = can(arg1);
 string v2 = arg2;
 // op(s)
 ofstream out(fs::path(u8(v1)));
 out << v2;
 out.close();
 if (exist(v1)) return false;
 return true; // check if fails guest-admin
}

// cout << drop ("فارسی.txt", v1) << endl;
// if (exist("فارسی.txt")) cout << "YES" << endl;

#endif

#ifdef __linux__
bool drop (string arg1, string arg2 = "", ...) {
 /* variable(s)
 [v1] name of text file
 [v2] text to be written into file
 [v3] file-handler
 */
 FILE *v3 = NULL;
 v3 = fopen(arg1.c_str(), "a");
 if (not v3) return true;
 fprintf(v3, "%s", u8(arg2).c_str());
 fclose(v3); 
 return false;
}
#endif

bool drop (...) {return true;}

//bool drop(string arg1, string arg2 = "", ...) {
// /* variable(s)
// [v1] name of text file
// [v2] text to be written
// [v3] file-handler
// */
// string v1 = can(arg1);
// string v2 = arg2;
// FILE *v3 = NULL;
// #ifdef __linux__
// v3 = fopen(v1.c_str(), "a");
// #endif
// #ifdef _WIN32
// v3 = _wfopen(u8(v1).c_str(), L"a,ccs=UTF-8");
// #endif
// if (not v3) return true;
// fprintf(v3, "%s", u8(v2).c_str());
////	fprintf(v3, "%s", v2.c_str());
// fclose(v3);
// if (not exist(v1)) return true;
// return false;
//}

//bool drop(...) {return true;}

////write-text-file [name] [content]
////#ifdef _WIN32
////bool drop(const wchar_t* arg1, const wchar_t* arg2 = L"", ...) {
////  FILE *fh = NULL;
////  fh = _wfopen(arg1, L"a,ccs=UTF-8");
////	if (not fh) return false;
////	fwprintf(fh, arg2);
////	fclose(fh);
////	return true;
////}
////bool drop(const wchar_t* arg1, string arg2 = "", ...) {
////  FILE *fh = NULL;
////  fh = _wfopen(arg1, L"a,ccs=UTF-8");
////	if (not fh) return false;
////  const wchar_t* txt = widen(arg2).c_str();
////	fwprintf(fh, txt);
////	fclose(fh);
////	return true;
////}
////#endif

//bool drop_(const char8_t* arg1, wstring arg2 = L"", ...) {return true;}

//int main() {
// string v1 = "پارسا را گایدم.""\n""خوابیدم";
// cout << drop_("فارسی.txt", v1) << endl;
//}



//bool drop (string arg1, const wchar_t* arg2 = L"", ...) {
// /* variable(s)
// [v1] name of text file
// [v2] text to be written into file
// [v3] file-handler
// */
// string v1 = can(arg1);
// string v2 = arg2;
// FILE *v3 = NULL;
// v3 = _wfopen(u8(arg1).c_str(), L"a,ccs=UTF-8");
// // op(s)
// fwprintf(v3, arg2);
// fclose(v3); // wfclose?
// return false; // check truly done?
//}


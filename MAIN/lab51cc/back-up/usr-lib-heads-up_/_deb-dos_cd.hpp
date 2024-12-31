/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool cd(string arg1, ...) {
 /* variable(s)
 [v1] path
 */
 string v1 = can(arg1);
 // op(s)
 try {
  fs::current_path(u8(v1));
  return false;
 } catch (...) {return true;}
}

bool cd(...) {return false;}

//// change-directory [path]

//bool cd(string arg1, ...) {
//	/*		variable(s)
//	[v1]	path
//	*/
//	string v1 = arg1;
//	abbr(v1);
//	// op(s)
//	#ifdef __linux__
//	int e = chdir(v1.c_str());
//	#endif
//	#ifdef _WIN32
//	int e = _wchdir(u8(v1).c_str());
//	#endif
//	if (e) return true; return false;
//}

//bool cd(...) {return true;}


/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool dir(string arg1, ...) {
 /* variable(s)
 [v1] path
 */
 string v1 = can(arg1);
 // op(s)
 return fs::is_directory(u8(v1));
}

bool dir(...) {return true;}

//// is-directory [file | directory]

//bool dir(string arg1, ...) {
//	/*		variable(s)
//	[v1]	file | directory
//	*/
//	string v1 = arg1;
//	#ifdef __linux__
//	abbr(v1);
//	#endif
//	// op(s)
//	if (not exist(v1)) return false;
//	#ifdef _WIN32
//	return fs::is_directory(u8(v1));
//	#endif
//	return fs::is_directory(v1);
//}

//bool dir(...) {return false;}

/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string os(...) {
 #ifdef __linux__
 return "linux";
 #elif _WIN64
 return "win64";
 #elif _WIN32
 return "win32";
 #elif __WINDOWS__
 return "win"
 #elif __APPLE__ || __MACH__
 return "mac_osx";
 #elif __FreeBSD__
 return "free_bsd";
 #elif __unix || __unix__
 return "unix";
 #else
 return "unknown";
 #endif
}

//// operating-system another order

//string os(...) {
//	#ifdef _WIN64
//		return "win64";
//	#elif _WIN32
//		return "win32";
//	#elif __WINDOWS__
//		return "win"
//	#elif __linux__
//		return "linux";
//	#elif __APPLE__ || __MACH__
//		return "mac_osx";
//	#elif __FreeBSD__
//		return "free_bsd";
//	#elif __unix || __unix__
//		return "unix";
//	#else
//		return "unknown";
//	#endif
//}

//string os(void) {
////	#ifdef _WIN32
////		return "win32";
////	#elif _WIN64
////		return "win64";
//	#ifdef __WINDOWS__
//		return "win"
//	#elif __linux__
//		return "linux";
//	#elif __APPLE__ || __MACH__
//		return "mac_osx";
//	#elif __FreeBSD__
//		return "free_bsd";
//	#elif __unix || __unix__
//		return "unix";
//	#else
//		return "unknown";
//	#endif
//}


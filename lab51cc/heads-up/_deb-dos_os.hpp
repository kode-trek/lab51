/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
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

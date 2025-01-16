/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
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

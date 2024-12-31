/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

#ifdef __linux__
string u8(string arg1, ...) {return arg1;}
#endif

#ifdef _WIN32
wstring u8(string& arg1, ...) {
 /*  variable(s)
 [v1] converter [String -> WideString]
 */
 wstring_convert<std::codecvt_utf8_utf16<wchar_t>> v1;
 // op(s)
 return v1.from_bytes(arg1);
}
#endif

string u8(...) {return "";}

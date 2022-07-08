/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
string pwd(...) {return (fs::current_path()).string();}
// #ifdef _WIN32
// /* variable(s)
// [v1] maximum-path-length
// */
// char v1[MAXPATHLEN];
// // op(s)
// return (getcwd(v1, sizeof(v1)) ? string(v1) : string(""));
// #endif

/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string uname(...) {
 return getenv("USER");
 #ifdef _WIN32
 /* variable(s)
 [v1] user-name
 [v2] username-length
 */
 string v1 = getenv("username");
// char v1[UNLEN + 1];
// DWORD v2 = UNLEN + 1;
// // op(s)
// GetUserName(v1, &v2);
 return v1;
 #endif
}

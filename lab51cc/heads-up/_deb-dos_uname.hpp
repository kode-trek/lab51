/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
string uname(...) {
 return getenv("USER");
 #ifdef _WIN32
 /* variable(s)
 [v1] user-name
 [v2] username-length
 */
 char v1[UNLEN + 1];
 DWORD v2 = UNLEN + 1;
 // op(s)
 GetUserName(v1, &v2);
 return v1;
 #endif
}

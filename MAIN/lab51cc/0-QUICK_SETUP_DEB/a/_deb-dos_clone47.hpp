/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

#ifdef __linux__
bool clone47(string arg1, string arg2, ...) { // !use with extreme caution!
 /* variable(s)
 [v1] source
 [v2] target
 */
 string v1 = can(arg1);
 string v2 = can(arg2);
 // op(s)
 return sys("rsync -Rr " + quote(v1) + " " + quote(v2), false);
}
#endif

bool clone47(...) {return 1;}

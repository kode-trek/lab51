/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
void pausee(bool arg1 = false, ...) {
 #ifdef __linux__
 note("press " + mark("blue", "ENTER") + " key to continue...");
 cin.get();
 if (arg1) cin.get();
 #endif
 #ifdef _WIN32
 note("press " + mark("blue", "ENTER") + " key to continue...");
 cin.get();
 if (arg1) cin.get();
 cout << endl;
 #endif
}

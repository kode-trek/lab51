/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

float str2num(string arg1, ...) {
 float v1 = 0.0;
 // op(s)
 stringstream func(arg1);
 func >> v1;
 return v1;
}

float str2num(...) {return 0.0;}

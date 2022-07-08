/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
float str2num(string arg1, ...) {
 float v1 = 0.0;
 // op(s)
 stringstream func(arg1);
 func >> v1;
 return v1;
}
float str2num(...) {return 0.0;}

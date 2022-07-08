/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
float last(...) {
 /* variable(s)
 [v1] duration
 */
 auto v1 = chrono::duration_cast<chrono::microseconds>(v2_stop - v1_start);
 return v1.count() / 1e+6;
}

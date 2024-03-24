/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

float last(...) {
 /* variable(s)
 [v1] duration
 */
 auto v1 = chrono::duration_cast<chrono::microseconds>(v2_stop - v1_start);
 // op(s)
 return v1.count() / 1e+6;
}

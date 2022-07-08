/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
void wait(int arg1, ...) {
 /* variable(s)
 [v1] mili-second
 */
 int v1 = arg1 * 1000000; // 1,000,000
 // op(s)
 if (v1 < 0) usleep(0);
 else usleep(v1);
}
void wait(...) {usleep(0);}

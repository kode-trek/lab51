/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool wait(float arg1, ...) {
 /* variable(s)
 [v1] mili-second
 */
 float v1 = arg1 * 1000000; // 1,000,000
 // op(s)
 if (v1 < 0) usleep(0);
 else usleep(v1);
 return false;
}

bool wait(...) {
 usleep(0);
 return false;
}

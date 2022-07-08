/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
void seedr(int arg1, ...) {
 /* variable(s)
 [v1] seed-to-initialize
 */
 int v1 = arg1;
 // op(s)
 srand(v1); // reproducible
}
void seedr(...) {
 srand(time(NULL)); // irreproducible
}

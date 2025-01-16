/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

void seedr(int arg1, ...) {
 /* variable(s)
 [v1] number-of-seed(s)-to-initialize
 */
 int v1 = arg1;
 // op(s)
 srand(v1); // reproducible (replicable)
}

void seedr(...) {
 srand(time(NULL)); // irreproducible
}

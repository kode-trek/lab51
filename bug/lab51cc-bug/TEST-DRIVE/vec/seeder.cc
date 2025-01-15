/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "SEEDER [NUMBER-OF-SEED(S)-TO-INITIALIZE]""\n"
 "void seedr(int)""\n"
 "========================================"
 << endl;
 // op(s)
 seedr();
 cout << rand() << endl;
 cout << "----" << endl;
 //
 seedr(3);
 cout << rand() << endl;
 cout << "----" << endl;
 //
 seedr(1);
 cout << rand() << endl;
 cout << "----" << endl;
 //
 seedr(0);
 cout << rand() << endl;
 cout << "----" << endl;
 //
 seedr(-4); // need INT argument?
 cout << rand() << endl;
}
//[] ./seeder
//[] ./seeder

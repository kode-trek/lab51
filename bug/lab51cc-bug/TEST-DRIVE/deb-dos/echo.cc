/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "ECHO-INPUT [ON | OFF]""\n"
 "void echo (bool)""\n"
 "=====================""\n"
 << endl;
 // variable(s)
 string pass = "";
 // op(s)
 cout << "pass: ";
 echo(false); cin >> pass; echo(true);
 if (pass == "admin") cout << endl << "access granted." << endl;
 if (pass != "admin") cout << endl << "access denied!" << endl;
 #ifdef _WIN32
 pausee();
 #endif
}
// pass: admin
// pass: idk
// pass: [CTRL+C]

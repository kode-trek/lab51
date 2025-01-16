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

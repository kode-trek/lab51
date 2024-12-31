/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "NO-NEW-LINE-PRINT [TEXT]""\n"
 "void note (string, string)""\n"
 "==========================""\n"
 << endl;
 // command(s)
 int c = 0;
 string cmd1 = "lss";
 // message(s)
 string msg1 = "[] executing command...";
 // op(s)
 note(msg1);
 c = sys(cmd1 + " 1>/dev/null 2>/dev/null");
 if (c) {cout << "HALTED.""\n""[FAILED] " << cmd1 << endl; exit(1);}
 cout << "DONE." << endl;
 //
 note("colored""\n", "blue");
}

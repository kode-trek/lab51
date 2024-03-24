/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "SYSTEM [COMMAND]""\n"
 "int sys (string)""\n"
 "================""\n"
 << endl;
 //var(s)
 int c = 0;
 string cmd1 = "lss";
 //msg(s)
 string msg1 = "[] executing " + squote(cmd1) + " command...";
 //op(s)
 cout << sys() << endl << endl;
 //
 disp(msg1);
 c = sys(cmd1 + " 1>/dev/null 2>/dev/null");
 if (c) {cout << "HALTED.""\n""[FAILED] " << cmd1 << endl; exit(1);}
 cout << "DONE." << endl; exit(0);
}

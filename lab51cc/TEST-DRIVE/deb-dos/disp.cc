/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 cout <<
 "NO-NEW-LINE-PRINT [TEXT]""\n"
 "void disp (string)""\n"
 "========================""\n"
 << endl;
 //cmd(s)
 int c = 0;
 string cmd1 = "lss";
 //msg(s)
 string msg1 = "[] executing command...";
 //op(s)
 disp(msg1);
 c = sys(cmd1 + " 1>/dev/null 2>/dev/null");
 if (c) {cout << "HALTED.""\n""[FAILED] " << cmd1 << endl; exit(1);}
 cout << "DONE." << endl;
}

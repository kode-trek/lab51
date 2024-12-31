/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 if (not write_access()) {
  cout <<
  mark("[out] ", "blue") << pwd() << "\n" <<
  mark("[WARNING] ", "yellow") << "write-permission denied."
  << endl;
  exit(0);
 }
 string wd = ts(); md(wd); cd(wd);
 cout <<
 "COPY [SOURCE] [TARGET] [IN " << wd << "]""\n"
 "bool cp (string, string)""\n"
 "========================================""\n"
 << endl;
 /* variable(s)
 [f1] temp-file-name
 */
 string f1 = "";
 //op(s)
 drop("f1", "f1-text");
 drop("f2", "f2-text");
 cout << cp("f1", "f2") << endl;
 pausee();
 rm("f1");
 rm("f2");
 //
 drop("f1", "f1-text");
 md("d2");
 drop("d2/f2", "f2-text");
 cout << cp("f1", "d2/f2") << endl;
 pausee();
 rm("f1");
 rm("d2");
 //
// md("d1");
 md("d1/d11");
 drop("d1/f1");
 md("d2");
 cout << cp("d1", "d2") << endl;
 pausee();
 rm("d1");
 rm("d2");
 // copy this very directory into itslef!
 md("d1");
 cout << cp(".", "d2") << endl;
 // SOURCE and TARGET are the same!
 cout << cp(".", ".") << endl;
 // clean-up
 pausee();
 cd("..");
 rm(wd);
}

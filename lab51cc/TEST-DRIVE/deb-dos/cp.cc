/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 if (not write_access()) {
  cout << "[FAILED] write-permissioon denied." << endl;
  exit(1);
 }
 string wd = ts(); md(wd); cd(wd);
 cout <<
 "COPY [SOURCE] [TARGET] [IN: " << wd << "]""\n"
 "bool cp (string, string)""\n"
 "=========================================""\n"
 << endl;
 //var(s)
 string f1 = "";
 //op(s)
 cout << cp() << endl;
 //
 drop("F1", "Line-F1"); drop("F2", "Line-F2");
 cout << cp("F1", "F2") << endl;
 k2c(); rm("F1"); rm("F2"); cout << endl;
 //
 f1 = "F1_" + ts(); drop(f1);
 cout << cp(f1, "/") << endl;
 k2c(); rm(f1); rm("/" + f1); cout << endl;
 //
 drop("F1"); md("D2"); cout << cp("F1", "D2") << endl;
 k2c(); rm("F1"); rm("D2"); cout << endl;
 //
 drop("F1", "Line-F1"); md("D2"); drop("D2/F2", "Line-F2");
 cout << cp("F1", "D2/F2") << endl;
 k2c(); rm("F1"); rm("D2"); cout << endl;
 //
 md("D1"); md("D1/" + ts()); drop("D1/" + ts()); md("D2");
 cout << cp("D1", "D2") << endl;
 k2c(); rm("D1"); rm("D2"); cout << endl;
 //move this-very-dir into itslef!
 md("D2"); cout << cp(".", "D2") << endl;
 //<source> and <target> are the same!
 cout << cp(".", ".") << endl;
 //cleans-up
 k2c(); cd(".."); rm(wd);
}

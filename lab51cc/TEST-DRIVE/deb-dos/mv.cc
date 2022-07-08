/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 string wd = ts(); md(wd); cd(wd);
 cout <<
 "MOVE [SOURCE] [TARGET] [IN: " << wd << "]""\n"
 "bool mv (string, string)""\n"
 "=======================================""\n"
 << endl;
 //var(s)
 string f1 = ""; string f2 = ""; string d1 = ""; string d2 = "";
 //op(s)
 cout << mv() << endl;
 //
 drop("F1", "Line-F1"); drop("F2", "Line-F2");
 cout << mv("F1", "F2") << endl;
 k2c(); rm("F1"); rm("F2"); cout << endl;
 //
 f1 = "F1_" + ts(); drop(f1);
 cout << mv(f1, "/") << endl;
 k2c(); rm(f1); rm("/" + f1); cout << endl;
 //
 drop("F1"); md("D2");
 cout << mv("F1", "D2") << endl;
 k2c(); rm("F1"); rm("D1"); cout << endl;
 //
 drop("F1", "Line-F1"); md("D2");
 drop("D2/F2", "Line-F2");
 cout << mv("F1", "D2/F2") << endl;
 k2c(); rm(f1); rm(f2); cout << endl;
 //
// md("D1");
 md("D1/D1"); drop("D1/F1"); md("D2");
 cout << mv("D1", "D2") << endl;
 k2c(); rm("D1"); rm("D2"); cout << endl;
 //move this-very-dir into itslef!
 md("D2");
 cout << mv(".", "D2") << endl;
 k2c(); cout << endl;
 //<source> and <target> are the same!
 cout << mv(".", ".") << endl;
 //cleans-up
 k2c(); cd(".."); rm(wd);
}

/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 string wd = ts(); md(wd); cd(wd);
 cout <<
 "MAKE-DIRECTORY [DIRECTORY] [IN: " + wd + "]""\n"
 "bool md (string)""\n"
 "===========================================""\n"
 << endl;
 //var(s)
 string d1 = "D_" + ts();
 //op(s)
 cout << md() << endl;
 cout << md(d1) << endl;
 cout << md(d1 + ".ext") << endl;
 cout << md("/" + d1) << endl;
 cout << md("multi/level/nested/dir") << endl;
 cout << md(d1 + "/d2") << endl;
 //cleans-up
 k2c(); cd(".."); rm(wd); rm("/" + d1);
}

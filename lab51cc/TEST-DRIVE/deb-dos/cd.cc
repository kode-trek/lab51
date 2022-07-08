/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 string wd = ts();
 md(wd);
 cd(wd);
 cout <<
 "CHANGE-DIRECTORY [PATH]""\n"
 "bool cd (string)""\n"
 "=======================""\n"
 << endl;
 /* variable(s)
 [v1] here
 */
 string here = pwd();
 // op(s)
 cout << pwd() << endl;
 cout << "----" << endl;
 //
 cout << cd() << endl;
 cout << pwd() << endl;
 cout << "----" << endl;
 //
 cout << cd(ts()) << endl;
 cout << pwd() << endl;
 cout << "----" << endl;
 //
 cout << cd("~") << endl;
 cout << pwd() << endl;
 cout << cd() << endl;
 cout << pwd() << endl;
 cout << cd(here) << endl;
 cout << pwd() << endl;
 cout << cd() << endl;
 cout << pwd() << endl;
 cout << "----" << endl;
 //
 md("پارسا");
 cout << cd("پارسا") << endl;
 cout << pwd() << endl;
 // cleans-up
 pausee();
 cd("../..");
 rm(wd);
// cout << cd("C:\\") << endl;
// cout << cd() << endl;
// cout << "----" << endl;
// //
//int chp(string arg1) {return sys("cd " + quote(arg1));}
// cout << cd("Z:\\") << endl << pwd() << endl;
// sys("dir");
//// sys("set");
// sys(R"(cd %SystemRoot%)");
// sys("dir");
// cout << pwd() << endl;
// cout << cd("C:\\") << endl << pwd() << endl << endl;
// cout << cd(here) << endl << pwd() << endl << endl;
// cout << cd("Z:\\") << endl << pwd() << endl << endl; sys("dir");
// sys("set"); sys("cd \%SystemRoot\%"); sys("dir"); cout << pwd() << endl;
}

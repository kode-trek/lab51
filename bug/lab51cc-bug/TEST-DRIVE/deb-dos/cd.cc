/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "CHANGE-DIRECTORY [PATH]""\n"
 "bool cd (string)""\n"
 "======================="
 << endl;
 /* variable(s)
 [v1] here
 */
 string v1 = pwd();
 // op(s)
 cout << pwd() << endl;
 cout << "----" << endl;
 //
 cout << cd("~") << endl;
 cout << pwd() << endl;
 cout << cd(v1) << endl;
 cout << pwd() << endl;
 cout << cd("not-accessible-directory") << endl;
 cout << pwd() << endl;
 //
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


 cout << pwd() << endl;
 cd("پارسی");
 cout << pwd() << endl;
 if (pwd() == can("./")) cout << "Y-can" << endl;
 if (pwd() == "Z:\\""پارسی") cout << "Y-dos" << endl;
 if (pwd() == can("Z:/home/kode-trek/Public/پارسی")) cout << "Y-wine" << endl;

//try with/without root permission
 cout << cd("/root/") << endl;
 cout << pwd() << endl;


/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 string wd = ts();
 mkdir(wd);
 cd(wd);
 cout <<
 "MAKE-DIRECTORY [DIRECTORY] [IN: " + wd + "]""\n"
 "bool md (string)""\n"
 "===========================================""\n"
 << endl;
 // op(s)
 cout << mkdir(ts()) << endl;
 cout << mkdir("multi/level/nested/dir") << endl;
 // clean-up
 pausee();
 cd("..");
 rm(wd);
}

	cout << md(tmpd + ".ext") << endl;
	cout << md(tmpd + "/dir-in-already-avaliable-one") << endl;


/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
//	if (not write_access()) {
//		cout << "[FAILED] write-permissioon denied." << endl;
//		exit(1);
//	}
 string wd = ts(); md(wd); cd(wd);
 cout <<
 "SIZE [FILE | DIRECTORY] [IN: " << wd << "]""\n"
 "auto fsize (string)""\n"
 "ifstream::pos_type fsize (string)""\n"
 "========================================""\n"
 << endl;
 // op(s)
 drop("F1"); cout << fsize("F1") << endl;
 //
 drop("F1", "Line#1"); cout << fsize("F1") << endl;
 //
 md("D1"); cout << fsize("D1") << endl;
 //
 mv("F1", "D1"); cout << fsize("D1") << endl;
 #ifdef __linux__
 sys("du -h D1/");
 #endif
	cout << fsize("پارسی.txt") << endl;
	//op(s)-end
 // clean-up
 pausee();
 cd("..");
 rm(wd);
}

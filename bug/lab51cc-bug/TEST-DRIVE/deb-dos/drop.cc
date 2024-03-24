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
 }
 string wd = ts();
 md(wd);
 cd(wd);
//	cout <<
//	"WRITE-TEXT-FILE [FILE] [TEXT] [IN: " << wd << "]""\n"
//	"bool drop (string, string)""\n"
 cout <<
 "WRITE-TEXT-FILE [NAME] [CONTENT] [IN " << wd << "]""\n"
 "bool drop (string, string)""\n"
 "=================================================""\n"
 << endl;
 // op(s)
 cout << drop("f1") << endl;
 pausee();
 //
 cout << drop("f1", "line#1") << endl;
 pausee();
 // clean-up
 pausee();
 cd("..");
 rm(wd);
}

	{
		#ifdef _WIN32
		cout << drop(L"پارس.txt", "Line#1") << endl;
		k2c();
		cout << drop(L"پارس.txt", L"\n""فارسی آسان است!") << endl;
		k2c();
		#endif
	}
	{
		#ifdef _linux_
		cout << drop("پارس ها", "Line#1") << endl;
		k2c();
		cout << drop("پارس ها", "\n""فارسی آسان است!") << endl;
		k2c();
		#endif
	}
	//op(s)-end
	cd("..");
	rm(wd);
}
//https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/fopen-wfopen?view=msvc-160

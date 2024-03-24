/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
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
 drop("F1", "Line-F1"); drop("F2", "Line-F2");
 cout << mv("F1", "F2") << endl;
 k2c(); rm("F1"); rm("F2"); cout << endl;
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

#ifdef _WIN32
wstring widen(const string& arg1) {
	wostringstream wstm;
	const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (wstm.getloc());
	for (size_t i = 0; i < arg1.size(); ++i) wstm << ctfacet.widen(arg1[i]);
	return wstm.str();
}
#endif

void mvv(string arg1, string arg2) {
	#ifdef __WIN32
	wstring v1 = wstring(arg1.begin(), arg1.end());
	wstring v2 = wstring(arg2.begin(), arg2.end());
	_wrename(v1.c_str(), v2.c_str());
	#endif
	#ifdef __linux__
	rename(arg1.c_str(), arg2.c_str());
	#endif
}

int main() {
	mvv("test.txt", "test2.txt");
}

//#include "wchar.h"

//	ostringstream ss;
//	ss << arg1;
#ifdef _WIN32
wstring widen(const string& arg1) {
	wostringstream wstm;
	const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (wstm.getloc());
	for (size_t i = 0; i < arg1.size(); ++i) wstm << ctfacet.widen(arg1[i]);
	return wstm.str();
}
string narrow(const wstring& arg1) {
	ostringstream stm;
	const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (stm.getloc());
	for(size_t i = 0; i < arg1.size(); ++i) stm << ctfacet.narrow(arg1[i], 0);
	return stm.str();
}
#endif

int main() {
//	ofstream out(std::filesystem::path(u8"فارسی"));
//	out << "پارسی را پاس بداریم";
//	out.close();

//	string v1 = arg1;
//	string v2 = arg2;
	fs::path v1 = u8"پارسی";
	fs::path v2 = u8"پارسی را پاس بداریم";
////  FILE* f= _wfopen(utf8_decode(path).c_str(), L"wt");
//	#ifdef _win32
//	FILE *v3 = NULL;
//  v3 = _wfopen(v1, L"a,ccs=UTF-8");
//	if (not v3) return false;
//	fwprintf(v3, v2);
//	fclose(v3);
//	return true;
//	#endif

//	fs::path v1 = u8"پارسی";
//	fs::path v2 = u8"پارسی را پاس بداریم";
//	cout << narrow(v1) << endl;
//	cout << narrow(v2) << endl;
//	wcout << v1 << endl;
//	wcout << v2 << endl;
//	cp(str(u8"پارسی"), str(u8"فارسی"));

	#ifdef _WIN32
	/*		variable(s)
	[v3]	shell-file-operation-structure
	*/
	SHFILEOPSTRUCTA v3;
	v3.pFrom = narrow(v1).c_str();
	v3.pTo = narrow(v2).c_str();
	v3.wFunc = FO_COPY;
	v3.fFlags = FOF_NOCONFIRMATION | FOF_NOCONFIRMMKDIR | FOF_SILENT;
	// op(s)
	SHFileOperationA(&v3);
	#endif

}

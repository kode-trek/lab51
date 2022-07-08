/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/

//#ifdef _WIN32
//bool drop(const wchar_t*, const wchar_t*, ...);
//bool drop(const wchar_t*, string, ...);
//#endif

//	#ifdef __linux__
//	locale::global(locale("en_US.UTF-8"));
//	#endif
//wstring widen(const string& arg1) {
//	wostringstream wstm;
//	const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (wstm.getloc());
//	for (size_t i = 0; i < arg1.size(); ++i) wstm << ctfacet.widen(arg1[i]);
//	return wstm.str();
//}
//string narrow(const wstring& arg1) {
//	ostringstream stm;
//	const ctype<wchar_t>& ctfacet = use_facet<ctype<wchar_t>> (stm.getloc());
//	for(size_t i = 0; i < arg1.size(); ++i) stm << ctfacet.narrow(arg1[i], 0);
//	return stm.str();
//}

// write-text-file [name] [content]
//#ifdef _WIN32
//bool drop(const wchar_t* arg1, const wchar_t* arg2 = L"", ...) {
//  FILE *fh = NULL;
//  fh = _wfopen(arg1, L"a,ccs=UTF-8");
//	if (not fh) return false;
//	fwprintf(fh, arg2);
//	fclose(fh);
//	return true;
//}
//bool drop(const wchar_t* arg1, string arg2 = "", ...) {
//  FILE *fh = NULL;
//  fh = _wfopen(arg1, L"a,ccs=UTF-8");
//	if (not fh) return false;
//  const wchar_t* txt = widen(arg2).c_str();
//	fwprintf(fh, txt);
//	fclose(fh);
//	return true;
//}
//#endif
bool drop(string arg1, string arg2 = "", ...) {
	/*		variable(s)
	[v1]	name-of-text-file
	[v2]	text-to-be-written
	[v3]	file-handler
	*/
	string v1 = arg1;
	string v2 = arg2;
	FILE *fh = NULL;
	// op(s)
	#ifdef __linux__
	abbr(v1);
	#endif
	// op(s)
	v3 = fopen(v1.c_str(), "a");
	if (not v3) return true;
	fprintf(v3, "%s", v2.c_str());
	fclose(v3);
	return false;
}
bool drop(...) {return true;}

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

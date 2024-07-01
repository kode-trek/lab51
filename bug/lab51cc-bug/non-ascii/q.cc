wstring convert(string& arg1) {
	wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
	return converter.from_bytes(arg1);
}

int main() {
	string v1 = "فارسی";
	#ifdef _WIN32
	cout << fs::is_empty(convert(v1)) << endl;
	#endif
	#ifdef __linux__
	cout << fs::is_empty(v1) << endl;
	#endif
}

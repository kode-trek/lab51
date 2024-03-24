#ifdef _WIN32
bool drop_(string arg1, string arg2 = "", ...) {
 ofstream out(fs::path(u8(arg1)));
 out << arg2;
 out.close();
 return false;
}

bool drop_(string arg1, const wchar_t* arg2 = L"", ...) {
 FILE *v3 = NULL;
 v3 = _wfopen(u8(arg1).c_str(), L"a,ccs=UTF-8");
 fwprintf(v3, arg2);
 fclose(v3);
 return false;
}

#endif
#ifdef __linux__
//bool drop_(const char8_t* arg1, wstring arg2 = L"", ...) {return true;}

bool drop_(string arg1, string arg2 = "", ...) {
 FILE *v3 = NULL;
 v3 = fopen(arg1.c_str(), "a");
 fprintf(v3, "%s", u8(arg2).c_str());
 fclose(v3);
 return false;
}
#endif

bool drop_(...) {return true;}

int main() {
 string v1 = "پارسا را گایدم.""\n""خوابیدم";
 cout << drop_("فارسی.txt", v1) << endl;
}

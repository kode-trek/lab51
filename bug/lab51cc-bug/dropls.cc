bool dropls(string arg1, vector<string> arg2, string arg3="", string arg4="") {
 string v1 = can(arg1);
 vector<string> v2 = arg2;
 FILE *v3 = NULL;
 #ifdef __linux__
 v3 = fopen(v1.c_str(), "a");
 #endif
 #ifdef _WIN32
 v3 = _wfopen(u8(v1).c_str(), L"a,ccs=UTF-8");
 #endif
 if (not v3) return true;
 for (int i = 0; i < v2.size(); i++)
  fprintf(v3, "%s\n", u8(arg3 + v2[i] + arg4).c_str());
 fclose(v3);
 return false;
}

int main() {
 vector<string> v1 = {"foo", "bar", "foo bar", "baz"};
 dropls(ts(), v1, "ls \"", "\",");
}

// drop("d1/f1"); md d1 and then drops f1


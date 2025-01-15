/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string replace(string arg1, const string arg2, const string arg3, ...) {
 /* variable(s)
 [v1] start-position
 [REF] https://stackoverflow.com/questions/3418231/replace-part-of-a-string-with-another-string
 */
 if (arg2.empty()) return "";
 size_t v1 = 0;
 while ((v1 = arg1.find(arg2, v1)) != string::npos) {
  arg1.replace(v1, arg2.length(), arg3);
  v1 += arg3.length();
 }
 return arg1;
}

string replace(...) {return "";}

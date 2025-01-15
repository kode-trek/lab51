/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string str(auto arg1, ...) {
 /* variable(s)
 [v1] entry
 [v2] output-string-stream
 */
 auto v1 = arg1;
 ostringstream v2;
 // op(s)
 v2 << v1;
 return v2.str();
}

vector<string> str(vector<auto> arg1, ...) {
 vector<string> v1 = {};
 // op(s)
 for (int i = 0; i < arg1.size(); i++) v1.push_back(str(arg1[i]));
 return v1;
}

string str(...) {return "";}

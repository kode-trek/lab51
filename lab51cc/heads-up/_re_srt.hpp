/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
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
 /*  variable(s)
 [v1] entry-vector
 [v2] string-vector
 */
 vector<auto> v1 = arg1;
 vector<string> v2 = {};
 // op(s)
 for (int i = 0; i < v1.size(); i++) v2.push_back(str(v1[i]));
 return v2;
}
string str(void) {return "";}

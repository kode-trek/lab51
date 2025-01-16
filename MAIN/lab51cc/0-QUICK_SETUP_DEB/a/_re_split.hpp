/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

vector<string> split(string arg1, string arg2 = ",", ...) {
 /* variable(s)
 [v1] text
 [v2] delimiter
 [v3] vector-of-splitted-word(s)
 [v4] position
 [v5] token
 */
 string v1 = arg1;
 string v2 = arg2;
 vector<string> v3 = {};
 size_t v4 = 0;
 string v5;
 // op(s)
 if (v2 == "") {
  v3.push_back(v1);
  return v3;
 }
 while ((v4 = v1.find(v2)) != string::npos) {
  v5 = v1.substr(0, v4);
  v3.push_back(v5);
  v1.erase(0, v4 + v2.length());
 }
 v3.push_back(v1);
 return v3;
}

vector<string> split(...) {return {};}

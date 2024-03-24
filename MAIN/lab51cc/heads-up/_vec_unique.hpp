/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

vector<string> unique(vector<string> arg1, ...) {
 /* variable(s)
 [v1] vector of string(s)
 [v2] set of unique string(s)
 [v3] vector of unique string(s)
 */
 vector<string> v1 = arg1;
 set<string> v2;
 vector<string> v3;
 for (int i = 0; i < v1.size(); i++) v2.insert(v1[i]);
 for (set<string>::iterator i = v2.begin(); i != v2.end(); i++)
  v3.push_back(*i);
 return v3;
}

vector<string> unique(...) {return {};}

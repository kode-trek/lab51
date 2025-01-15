/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool has(string arg1, string arg2, ...) {
 /* variable(s)
 [v1] text
 [v2] search-term
 [v3] found-result
 */
 string v1 = arg1;
 string v2 = arg2;
 size_t v3 = 0;
 // op(s)
 v3 = v1.find(v2);
 if (v3 != string::npos) return true;
 return false;
}

bool has(string arg1, char arg2, ...) {
 /* variable(s)
 [v1] text
 [v2] search-term
 [v3] found-result
 */
 string v1 = arg1;
 char v2 = arg2;
 size_t v3 = 0;
 // op(s)
 v3 = v1.find(v2);
 if (v3 != string::npos) return true;
 return false;
}

bool has(...) {return false;}

// seems like the following line fails to trap the <core-dumped> error.
//  cout << has_({"foo", "zoo"}, "bar") << endl;

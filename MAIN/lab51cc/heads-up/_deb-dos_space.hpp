/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

ifstream::pos_type fsize(string arg1, ...) {
 /* variable(s)
 [v1] file/folder
 [v2] directory
 [v3] total-size
 */
 string v1 = can(arg1);
 vector<string> v2 = {};
 size_t v3 = 0;
 // op(s)
  if (dir(v1)) {
   v2 = tree(v1, true);
   for (int i = 0; i < v2.size(); i++) {
    if (dir(v2[i])) continue;
    ifstream in(v2[i], ifstream::ate | ifstream::binary);
    v3 += in.tellg();
   }
   return v3;
  }
  ifstream in(v1, ifstream::ate | ifstream::binary);
  return in.tellg();
}

float space(string arg1, string arg2 = "", ...) {
 string v1 = can(arg1);
 if (arg2 == "free")
  try {return fs::space(arg1).available;} catch (...) {return -1.0;}
 return fsize(arg1);
}

float space(...) {return fs::space(".").available;}

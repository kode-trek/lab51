/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
ifstream::pos_type fsize(string arg1, ...) {
 /* variable(s)
 [v1] file | directory
 [v2] directory
 [v3] total-size
 */
 string v1 = can(arg1);
 vector<string> v2 = {};
 size_t v3 = 0;
 // op(s)
// if (not exist(v1)) return 0;
// try {
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
// } catch (...) {return 0;}
}
ifstream::pos_type fsize(...) {
 /*  variable(s)
 [v1] current-working-directory
 [v2] total-size
 */
 vector<string> v1 = tree(pwd(), true);
 size_t v2 = 0;
 // op(s)
 for (int i = 0; i < v1.size(); i++) {
  if (dir(v1[i])) continue;
  ifstream in(v1[i], ifstream::ate | ifstream::binary);
  v2 += in.tellg();
 }
 return v2;
}

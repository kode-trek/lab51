/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

void home(string& arg1) {
 /* variable(s)
 [v1] tilde-$HOME
 [v2] flag
 */
 string v1 = "~";
 bool v2 = false;
 // op(s)
 if (arg1 == v1) v2 = true;
 if ((arg1[0] == '~') and (arg1[1] == '/')) v2 = true;
 if ((uname() == "root") and (v2 == true))
  arg1.replace(arg1.find(v1), v1.length(), "/root");
 if ((uname() != "root") and (v2 == true))
  arg1.replace(arg1.find(v1), v1.length(), "/home/" + uname());
}

string can(string arg1, ...) {
 #ifdef __linux__
 home(arg1);
 try {
  return fs::weakly_canonical(arg1);
 } catch (...) {return fs::weakly_canonical("");}
// return fs::weakly_canonical(arg1);
 #endif
 #ifdef _WIN32
 return fs::weakly_canonical(u8(arg1)).string();
// return fs::weakly_canonical(arg1.c_str()).string();
 #endif
}

string can(...) {return can(pwd());}

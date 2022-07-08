/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
void home(string& arg1) {
 /* variable(s)
 [v1] tilde-home
 */
 string v1 = "~";
 // op(s)
 if ((arg1[0] == '~') and (arg1.find(v1) < arg1.length())) {
  if (uname() == "root")
   arg1.replace(arg1.find(v1), v1.length(), "/root");
  else arg1.replace(arg1.find(v1), v1.length(), "/home/" + uname());
 }
}
string can(string arg1, ...) {
 #ifdef __linux__
 home(arg1);
 return fs::weakly_canonical(arg1);
 #endif
 #ifdef _WIN32
 return fs::weakly_canonical(u8(arg1).c_str()).string();
 #endif
}
string can(...) {return pwd();}

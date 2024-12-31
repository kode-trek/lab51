/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool mv(string arg1, string arg2 = pwd(), ...) {
 /* variable(s)
 [v1] source-path
 [v2] target-path
 */
 string v1 = can(arg1);
 string v2 = can(arg2);
 if (dir(v2)) v2 = v2 + "/" + uri(v1, "full-name");
 try {
  fs::rename(u8(v1), u8(v2));
  return false;
 } catch (...) {return true;}
}

bool mv(...) {return true;}

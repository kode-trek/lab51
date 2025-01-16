/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool ascii(char arg1, ...) {
 /* variable(s)
 [v1] entry
 */
 char v1 = arg1;
 // op(s)
 if (isascii(v1)) return true;
 return false;
}

bool ascii(string arg1, ...) {
 /* variable(s)
 [v1] entry
 [v2] flag
 */
 string v1 = arg1;
 bool v2 = false;
 // op(s)
 for (int i = 0; i < v1.size(); i++)
  if (not isascii(v1[i]))
   v2 = true;
 if (not v2) return true;
 return false;
}

bool ascii(...) {return true;}

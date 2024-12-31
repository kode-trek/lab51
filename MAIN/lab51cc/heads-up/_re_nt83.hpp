/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string nt83_f1(string arg1, int arg2) {
 string v1 = "";
 //
 for (int i = 0; i < arg2 - 1; i++) {
  if (
  (arg1[i] == ' ') or
  (arg1[i] == '"') or
  (arg1[i] == '*') or
  (arg1[i] == '+') or
  (arg1[i] == ',') or
  (arg1[i] == '|') or
  (arg1[i] == '/') or
  (arg1[i] == '\\') or
  (arg1[i] == ':') or
  (arg1[i] == ';') or
  (arg1[i] == '<') or
  (arg1[i] == '=') or
  (arg1[i] == '>') or
  (arg1[i] == '?') or
  (arg1[i] == ']') or
  (arg1[i] == '[') or
  (not ascii(arg1[i]))
  ) v1 += "_";
  else v1 += str(arg1[i]);
 }
 return v1;
}

string nt83(string arg1, ...) {
 /* variable(s)
 [v1] full-name of file/folder
 [v2] file-name (extension excluded.)
 [v3] first-7-letters of [v2]
 [v4] extension
 */
 string v1 = uri(arg1, "full-name");
 string v2 = uri(arg1, "file-name");
 string v3 = "";
 string v4 = uri(arg1, "extension");
 // op(s)
 if ((v1.size() <= 12) and ascii(v1)) return v1;
 if ((v2.size() > 8) or not ascii(v2)) v3 = nt83_f1(v2, 8);
 return (upper(v3) + "~" + upper(v4));
}

string nt83(...) {return "";}

/*
 The (NT_8.3) describes as follows:
 * The underscore ("_") replaces any gap/space (" ") and illegal characters:
   " * + , | / \ : ; < = > ? ] [

 This format DIFFERS from that legacy 8.3_FILE-NAME.
 (https://en.wikipedia.org/wiki/8.3_filename)
*/

/* the following need to get trapped
 cout << nt83("گویش.پارسی") << endl; // where extension is also a non-ascii
 cout << nt83("foo?.zar") << endl; // didn't trap <?> because of short length
*/

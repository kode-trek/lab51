/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string mime(string arg1, string arg2="type", ...) {
 #ifdef __linux__
 /* variable(s)
 [v1] file/folder
 [v2] temporary-file
 [v3] mime-description
 [v4] mime-mode
 */
 string v1 = can(arg1);
 string v2 = can("~/" + ts());
 string v3 = "";
 string v4 = arg2;
 // op(s)
 if (not exist(v1)) return "";
 if (v4 == "type") {
  sys("file --mime-type " + quote(v1) + " > " + quote(v2));
  if (split(split(cat(v2), ": ")[1], "/")[0] == "text") {
   rm(v2);
   return "text";
  }
  if (split(split(cat(v2), ": ")[1], "/")[0] != "text") {
   v4 = split(split(cat(v2), ": ")[1], "/")[0];
   rm(v2);
   return v4;
  }
 }
 if (v4 == "extension") {
  sys("file --extension " + quote(v1) + " > " + quote(v2));
  if (split(split(cat(v2), "\n")[0], ": ")[1] == "ERROR") {
   rm(v2);
   return "";
  }
  if (split(split(cat(v2), "\n")[0], ": ")[1] != "ERROR") {
   v4 = split(split(cat(v2), "\n")[0], ": ")[1];
   rm(v2);
   return v4;
  }
 }
 if (v4 == "verbose") {
  sys("file " + quote(v1) + " > " + quote(v2));
  rm(v2);
  return split(cat(v2), "\n")[0];
 }
 return v3;
 #endif
 #ifdef _WIN32
 return "";
 #endif
}

string mime(...) {return "";}

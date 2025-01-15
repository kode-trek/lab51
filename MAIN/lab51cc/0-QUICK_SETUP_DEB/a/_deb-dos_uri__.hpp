/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string uri(string arg1, string arg2=""...) {
 /*  variable(s)
 [v1] path
 [v2] parent
 [v3] full-name = file-name + extension
 [v4] file-name (without-extension)
 [v5] extension
 */
 string v1 = can(arg1);
 string v2, v3, v4, v5 = "";
 v2 = fs::path(u8(v1)).remove_filename().string();
 v3 = fs::path(u8(v1)).filename().string();
 v4 = fs::path(u8(v1)).stem().string();
 v5 = fs::path(u8(v1)).extension().string();
 // op(s)
 if (arg2 == "parent") return v2;
 if (arg2 == "full-name") return v3;
 if (arg2 == "file-name") return v4;
 if (arg2 == "extension") return v5;
 return v1;
}

string uri(...) {return "";}

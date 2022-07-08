/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
vector<string> uri(string arg1, ...) {
 /*  variable(s)
 [v1] path
 [v2] parent
 [v3] full-name = file-name + extension
 [v4] file-name (without-extension)
 [v5] extension
 */
 string v1 = can(arg1);
 string v2, v3, v4, v5 = "";
 v2 = fs::path(v1).remove_filename().string();
 v3 = fs::path(v1).filename().string();
 v4 = fs::path(v1).stem().string();
 v5 = fs::path(v1).extension().string();
 // op(s)
 return {v2, v3, v4, v5};
}
vector<string> uri(...) {return uri(pwd());}

//vector<string> uri(string arg="") {
//	string full_name = (fs::path(arg).filename()).string();
//	string file_name = (fs::path(arg).stem()).string();
//	string extension = (fs::path(arg).extension()).string();
//	return {full_name, file_name, extension};
//}

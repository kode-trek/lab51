/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
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
//vector<string> uri(...) {return uri(pwd());}


////uniform-resource-identifier [path]
//vector<string> uri(string arg1, ...) {
//	#ifdef __linux__
//	abbr(arg1);
//	if (arg1 != "") {
//		unsigned short int idx = strlen(arg1.c_str()) - 1;
//		if (arg1[idx] == '/') arg1 = arg1.substr(0, idx);
//	}
//	string parent = fs::path(arg1).remove_filename();
//	if (parent == "") parent = pwd();
//	string full_name = fs::path(arg1).filename();
//	string file_name = fs::path(arg1).stem();
//	string extension = fs::path(arg1).extension();
//	return {parent, full_name, file_name, extension};
//	#endif
//	#ifdef _WIN32
//	string parent = str(fs::path(arg1).remove_filename());
//	if (parent == "") parent = pwd();
//	string full_name = str(fs::path(arg1).filename());
//	string file_name = str(fs::path(arg1).stem());
//	string extension = str(fs::path(arg1).extension());
//	return {parent, full_name, file_name, extension};
//	#endif
//}
//vector<string> uri(...) {
//	#ifdef _WIN32
//	string arg1 = pwd();
//	string parent = str(fs::path(arg1).remove_filename());
//	string full_name = str(fs::path(arg1).filename());
//	string file_name = str(fs::path(arg1).stem());
//	string extension = str(fs::path(arg1).extension());
//	return {parent, full_name, file_name, extension};
//	#endif
//	#ifdef __linux__
//	string arg1 = pwd();
//	string parent = fs::path(arg1).remove_filename();
//	string full_name = fs::path(arg1).filename();
//	string file_name = fs::path(arg1).stem();
//	string extension = fs::path(arg1).extension();
//	return {parent, full_name, file_name, extension};
//	#endif
//}


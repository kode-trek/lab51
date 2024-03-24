/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool cp(string arg1, string arg2 = pwd(), ...) {
 /* variable(s)
 [v1] source-path
 [v2] target-path
 [v3] option-1
 [v4] option-2
 [v5] copy-method
 */
 string v1 = can(arg1);
 string v2 = can(arg2);
 const auto v3 = fs::copy_options::overwrite_existing;
 const auto v4 = fs::copy_options::recursive;
 const auto v5 = v3 | v4;
 // op(s)
 if (v1 == v2) return true; // <source> and <target> are the same!
 if (v1 == uri(v2, "parent")) return true; // moving this-very-directory into itslef!
 if (dir(v2)) v2 = v2 + "/" + uri(v1, "full-name");
 try {
  fs::copy(u8(v1), u8(v2), v5);
//  fs::copy(v1, v2, v5);
  return false;
 } catch (...) {return true;}
}

bool cp(...) {return true;}

//	const auto v3 = fs::copy_options::none;
//	const auto v4 = fs::copy_options::skip_existing;
//	const auto v5 = fs::copy_options::overwrite_existing;
//	const auto v6 = fs::copy_options::update_existing;
//	const auto v7 = fs::copy_options::recursive;
//	const auto v8 = fs::copy_options::copy_symlinks;
//	const auto v9 = fs::copy_options::skip_symlinks;
//	const auto v10 = fs::copy_options::directories_only;
//	const auto v11 = fs::copy_options::create_symlinks;
//	const auto v12 = fs::copy_options::create_hard_links;


//	#ifdef _WIN32
//	/*		variable(s)
//	[v3]	shell-file-operation-structure-ascii
//	*/
//	SHFILEOPSTRUCTA v3;
//	v3.pFrom = v1.c_str();
//	v3.pTo = v2.c_str();
//	v3.wFunc = FO_COPY;
//	v3.fFlags = FOF_NOCONFIRMATION | FOF_NOCONFIRMMKDIR | FOF_SILENT;
//	// op(s)
//	int e = SHFileOperationA(&v3);
//	if (not e) return false; return true;
//	#endif


//	if (arg1 == arg2) {
//		cerr << "<source> and <target> are the same file!" << endl; return false;
//	}
//	if (arg1 == uri(arg2)[0]) {
//		cerr << "cannot copy <directory> into itself!" << endl; return false;
//	}



//	#ifdef _WIN32
//	if (dir(arg2)) arg2 = arg2 + "\\" + uri(arg1)[1];
//	ifstream src(arg1, ios::binary); ofstream dst(arg2, ios::binary);
//	try {dst << src.rdbuf(); return true;} catch (...) {return false;}
//	#endif


//	#ifdef _WIN32
//	SHFILEOPSTRUCTA sf;
//	int result;
//	string source = arg1;
//	string dest = arg2;
//	sf.pFrom = source.c_str();
//	sf.pTo = dest.c_str();
//	sf.wFunc = FO_COPY;
//	sf.fFlags = FOF_NOCONFIRMATION | FOF_NOCONFIRMMKDIR | FOF_SILENT;
//	result = SHFileOperationA(&sf);
//	if (result == 0) return true;
//	return false;
//	#endif



//bool cp(string arg1="", string arg2="") {
//	home(arg1);
//	home(arg2);
//	if (exists(arg1) == 0) {return false;}
//	const auto opt1 = fs::copy_options::update_existing;
//	const auto opt2 = fs::copy_options::recursive;
//	const auto opt3 = fs::copy_options::directories_only;
//	const auto copy_opt = opt1 | opt2;
//	if (is_dir(arg1) == 1) {
//		md(uri(arg1)[1]);
//		try {
//			fs::copy(arg1, uri(arg1)[1] + "/" + arg2, copy_opt);
//			return true;
//		} catch (...) {return false;}
//	}
//	try {
//		fs::copy(arg1, arg2, copy_opt);
//		return true;
//	} catch (...) {return false;}
//}



/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string pwd(...) {
 try {return fs::current_path().string();} catch (...) {return "";}
}

////print-working-directory
//string pwd(...) {
//	#ifdef _WIN32
//	char temp[MAXPATHLEN];
//	return (getcwd(temp, sizeof(temp)) ? string(temp) : string(""));
//	#endif
//	#ifdef __linux__
//	return fs::current_path();
//	#endif
//}


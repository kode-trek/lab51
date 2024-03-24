/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

string cat(string arg1, string arg2="text", ...) {
 /* variable(s)
 [v1] name of text-file
 [v2] number of row(s)
 [v3] text
 [v4] file-handler
 [v5] character
 */
 string v1 = can(arg1);
 int v2 = 1;
 string v3 = "";
 FILE* v4;
 char v5 = '\0';
 // op(s)
 #ifdef __linux__
 v4 = fopen(v1.c_str(), "r");
 #endif
 #ifdef _WIN32
 v4 = _wfopen(u8(v1).c_str(), L"r,ccs=UTF-8");
 #endif
 if (v4) {
  while ((v5 = getc(v4)) != EOF) {
   if (v5 == '\n') (v2)++;
   v3 += v5;
  }
  fclose(v4);
 }
 if (v3.size() == 0) v2 = 0;
 if (arg2 == "nrow") return str(v2);
 if (arg2 == "text") return v3;
 return "";
}

string cat(...) {return "";}



//struct file_read {
//	bool exist;
//	unsigned long long int nrow;
//	string txt;
//};

//file_read read_text(string);

////read [text-file]
//rtf cat(string arg1, ...) {
//	#ifdef __linux__
//	abbr(arg1);
//	#endif
//	rtf v; v.nrow = 0; v.txt = "";
//	FILE *fp; char c = '\0'; unsigned long long int i = 0;
//	fp = fopen(arg1.c_str(), "r");
//	if (fp) {
//		while ((c = getc(fp)) != EOF) {
//			if (c == '\n') i++;
//			v.txt += c;
//		}
//		fclose(fp);
//		v.nrow = i;
//	}
//	return v;
//}
//rtf cat(...) {rtf v; v.nrow = 0; v.txt = ""; return v;}




//file_read read_txt(string arg="") {
//	home(arg);
//	file_read fr;
//	fr.exist = false;
//	fr.nrow = 0;
//	fr.txt = "";
//	FILE *fp = NULL;
//	char c = '\0';
//	int i = 0;
//	fp = fopen(arg.c_str(), "r");
//	if (fp) {
//		if ((c = getc(fp)) != EOF) {
//			i = 1;
//			fr.txt += c;
//		}
//		while ((c = getc(fp)) != EOF) {
//			if (c == '\n') {i++;}
//			fr.txt += c;
//		}
//		fclose(fp);
//		fr.exist = true;
//		fr.nrow = i;
//	}
//	return fr;
//}

//file_read readln_txt(string arg="") {
//	home(arg);
//	file_read fr;
//	fr.exist = false;
//	fr.nrow = 0;
//	fr.txt = "";
//	FILE *fp = NULL;
//	char c = '\0';
//	int i = 0;
//	fp = fopen(arg.c_str(), "r");
//	if (fp) {
//		while ((c = getc(fp)) != '\n') {
//			fr.txt += c;
//			fr.exist = true;
//			fr.nrow = 1;
//		}
//	}
//	fclose(fp);
//	return fr;
//}

#include <iostream>
#include <windows.h>
#include <lmcons.h>
#include <filesystem>
#include <sys/stat.h>
#include <fstream>
#include "alphanum.hpp"

using namespace std;
namespace fs = std::filesystem;

struct file_read {
	bool exist;
	unsigned long long int nrow;
	string txt;
};
time_t now = time(0);

/******************************************************************************/
bool cp(string, string);
bool exists(string);
bool is_dir(string);
bool md(string);
bool mv(string, string);
bool rm(string);
bool write_access(void);
bool write_ln(string, string);
file_read read_txt(string);
ifstream::pos_type f_size(string);
int sys(string);
string get_os_name(void);
string uname(void);
vector<string> dir_lst(string);
vector<string> uri(string);
/******************************************************************************/

bool cp(string arg1="", string arg2="") {
	string target = "";
	if (exists(arg1) == 0) {return false;}
	if (arg2 == "") {target = "_" + to_string(now);}
	else {target = arg2;}
	try {
		fs::copy(arg1.c_str(), target);
		return true;
	} catch (...) {return false;}
}

bool exists(string arg="") {
	return fs::exists(arg.c_str());
}

bool is_dir(string arg="") {
	if(fs::is_directory(arg.c_str())) {return true;}
	else {return false;}
}

bool md(string arg="") {
	string dname = "";
	if (arg == "") {dname = "_" + to_string(now);}
	else {dname = arg;}
	if(mkdir(dname.c_str()) != 0) {return false;}
	else {return true;}
}

bool mv(string arg1="", string arg2="") {
	if (exists(arg1) == 0) {return false;}
	if (exists(arg2) == 0) {return false;}
	md(arg2);
	try {
		fs::rename(arg1.c_str(), (arg2 + "/" + arg1).c_str());
		return true;
	} catch (...) {return false;}
}

bool rm(string arg="") {
	try {
		fs::remove_all(arg);
		return true;
	} catch (...) {return false;}
}

bool write_access(void) {
	string ts_fn = "_" + to_string(now);
	FILE *fp = NULL;
	fp = fopen(ts_fn.c_str(), "w");
	if (fp) {
		fclose(fp);
		rm(ts_fn);
		return true;
	}	else {return false;}
}

bool write_ln(string arg1="", string arg2="") {
	string fname = "";
	if (arg1 == "") {fname = "_" + to_string(now);}
	else fname = arg1;
	FILE *fp = NULL;
	fp = fopen(fname.c_str(), "a");
	if (!fp) {return false;}
	else {fprintf(fp, "%s", arg2.c_str());}
	fclose(fp);
	return true;
}

file_read read_txt(string arg="") {
	file_read fr;
	fr.exist = false;
	fr.nrow = 0;
	fr.txt = "";
	FILE *fp = NULL;
	char c = '\0';
	int i = 0;
	fp = fopen(arg.c_str(), "r");
	if (fp) {
		while ((c = getc(fp)) != EOF) {
			if (c == '\n') {i++;}
			fr.txt += c;
		}
		fclose(fp);
		fr.exist = true;
		fr.nrow = i;
	}
	return fr;
}

ifstream::pos_type f_size(string arg="") {
	if (is_dir(arg)) {return 0;}
	ifstream in(arg, ifstream::ate | ifstream::binary);
	return in.tellg();
}

int sys(string arg="") {
	int c = 0;
	c = system(arg.c_str());
	return c;
}

string get_os_name(void) {
	#ifdef _WIN32
	return "win32";
	#elif _WIN64
	return "win64";
	#elif __APPLE__ || __MACH__
	return "mac_osx";
	#elif __linux__
	return "linux";
	#elif __FreeBSD__
	return "free_bsd";
	#elif __unix || __unix__
	return "unix";
	#else
	return "unknown";
	#endif
}

string uname(void) {
	char username[UNLEN+1];
	DWORD username_len = UNLEN+1;
	GetUserName(username, &username_len);
	return username;
}

vector<string> dir_lst(string arg="./") {
	vector<string> v;
	if (arg == "") {return {""};}
	if (is_dir(arg) == false) {return {""};}
	for (const auto& entry:fs::directory_iterator(arg)) {
		v.push_back((entry.path()).string());
	}
	if (v.size() == 0) {return {""};}
	sort(v.begin(), v.end(), doj::alphanum_less<string>());
	return v;
}

vector<string> uri(string arg="") {
	string full_name = (fs::path(arg).filename()).string();
	string file_name = (fs::path(arg).stem()).string();
	string extension = (fs::path(arg).extension()).string();
	return {full_name, file_name, extension};
}

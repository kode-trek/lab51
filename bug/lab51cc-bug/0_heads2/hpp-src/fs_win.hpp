#include <iostream>
#include <windows.h>
#include <lmcons.h>
#include <filesystem>
#include <sys/stat.h>
#include <fstream>
#include "alphanum.hpp"

using namespace std;
namespace fs = std::filesystem;

time_t now = time(0);

/******************************************************************************/

bool write_access(void);
string get_os_name(void);
string uname(void);
vector<string> dir_lst(string);
vector<string> uri(string);
/******************************************************************************/

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

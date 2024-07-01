#include <unistd.h>
#include <filesystem>
#include <bits/stdc++.h>
#include "alphanum.hpp"

using namespace std;
namespace fs = std::filesystem;

struct file_read {
	bool exist;
	unsigned long long int nrow;
	string txt;
};
string uname = getenv("USER");

/******************************************************************************/
bool cp(string, string);
bool exists(string);
bool write_access(string);
bool is_dir(string);
bool is_root(void);
bool md(string);
bool mv(string, string);
bool rm(string);
bool writeln(string, string);
file_read read_text(string);
ifstream::pos_type fsize(string);
int sys(string);
string os(void);
string pwd(void);
string ts(string);
vector<string> dir_lst(string);
vector<string> uri(string);
void home(string&);
string as_is(string);
vector<int> unique(vector<int>);
void apt(void);
/******************************************************************************/
void apt(void) {
	int c = 0;
	string cmd = "";
	//
	cmd = "sudo apt-get install -f";
	c = sys(cmd  + " 1>/dev/null 2>/dev/null");
	if (c != 0) {cout << endl << "[FAILED] " << cmd << endl; exit(1);}
	//
	cmd = "sudo apt-get update";
	c = sys(cmd  + " 1>/dev/null 2>/dev/null");
	if (c != 0) {cout << endl << "[FAILED] " << cmd << endl; exit(1);}
	//
	cmd = "sudo apt-get install apt";
	c = sys(cmd  + " 1>/dev/null 2>/dev/null");
	if (c != 0) {cout << endl << "[FAILED] " << cmd << endl; exit(1);}
	//
	cmd = "sudo apt-get install software-properties-common";
	c = sys(cmd  + " 1>/dev/null 2>/dev/null");
	if (c != 0) {cout << endl << "[FAILED] " << cmd << endl; exit(1);}
	//
	cmd = "sudo apt-get clean";
	c = sys(cmd  + " 1>/dev/null 2>/dev/null");
	if (c != 0) {cout << endl << "[FAILED] " << cmd << endl; exit(1);}
	//
	cmd = "sudo apt-get autoclean";
	c = sys(cmd  + " 1>/dev/null 2>/dev/null");
	if (c != 0) {cout << endl << "[FAILED] " << cmd << endl; exit(1);}
	//
	cmd = "sudo apt-get update";
	c = sys(cmd  + " 1>/dev/null 2>/dev/null");
	if (c != 0) {cout << endl << "[FAILED] " << cmd << endl; exit(1);}
}
//
string as_is(string arg="") {return (string) "'" + arg + (string) "'";}

void disp(string arg="") {
	cout << arg;
	cin.sync();
}

void wait(unsigned int arg) {
	// ms: microseconds
	unsigned int ms = arg * 1000000;
	usleep(ms);
}

vector<int> unique(vector<int> arg) {
	set <int> s;
	vector<int> v;
	for (int i = 0; i < arg.size(); i++) {s.insert(arg[i]);}
	for (set <int>::iterator i = s.begin(); i != s.end(); i++) {v.push_back(*i);}
	return v;
}

string ts(string arg="") {
	string dt = "";
	time_t now = time(0);
	tm *ltm = localtime(&now);
	dt =
	(string) "D[" + \
	to_string(1900 + ltm->tm_year) + \
	(string) "-" + \
	to_string(1 + ltm->tm_mon) + \
	(string) "-" + \
	to_string(ltm->tm_mday) + \
	(string) "]T[" + \
	to_string(1 + ltm->tm_hour) + \
	(string) ":" + \
	to_string(1 + ltm->tm_min) + \
	(string) ":" + \
	to_string(1 + ltm->tm_sec) + \
	(string) "]";
	if (arg == "h") {return dt;}
	return to_string(now);
}

string pwd(void) {return fs::current_path();}

void home(string& arg) {
	string str = "~";
	if (arg.find(str) < arg.length()) {
		arg.replace(arg.find(str), str.length(), "/home/" + uname);
	}
}

string os(void) {
//	#ifdef _WIN32
//		return "win32";
//	#elif _WIN64
//		return "win64";
	#ifdef __WINDOWS__
		return "win"
	#elif __linux__
		return "linux";
	#elif __APPLE__ || __MACH__
		return "mac_osx";
	#elif __FreeBSD__
		return "free_bsd";
	#elif __unix || __unix__
		return "unix";
	#else
		return "unknown";
	#endif
}

bool cp(string arg1="", string arg2="") {
	home(arg1);
	home(arg2);
	if (exists(arg1) == 0) {return false;}
	const auto opt1 = fs::copy_options::update_existing;
	const auto opt2 = fs::copy_options::recursive;
	const auto opt3 = fs::copy_options::directories_only;
	const auto copy_opt = opt1 | opt2;
	if (is_dir(arg1) == 1) {
		md(uri(arg1)[1]);
		try {
			fs::copy(arg1, uri(arg1)[1] + "/" + arg2, copy_opt);
			return true;
		} catch (...) {return false;}
	}
	try {
		fs::copy(arg1, arg2, copy_opt);
		return true;
	} catch (...) {return false;}
}

bool exists(string arg="") {
	home(arg);
	return fs::exists(arg);
}

bool write_access(string arg="") {
	home(arg);
	string p = "";
	string cd = pwd();
	if (arg == "") {p = cd;}
	else {p = arg;}
	if (exists(p) == 0) {return false;}
	chdir(p.c_str());
	string fname = ts();
	writeln(fname, "");
	if (exists(fname) == 1) {
		rm(fname);
		chdir(cd.c_str());
		return true;
	}
	else {
		chdir(cd.c_str());
		return false;
	}
}

bool is_dir(string arg="") {
	home(arg);
	if(fs::is_directory(arg)) {return true;}
	else {return false;}
}

bool is_root(void) {
	if (uname == "root") {return true;}
	else {return false;}
//	if (getuid() == 0) {return true;}
//	else {return false;}
}

bool md(string arg1="") {
	home(arg1);
	string dname = arg1;
	try {
		if (fs::create_directory(dname) == 1) {return true;}
		else {return false;}
	} catch (...) {return false;}
}

bool mv(string arg1="", string arg2="") {
	home(arg1);
	home(arg2);
	if (write_access(uri(arg1)[0]) == 0) {return false;}
	if (write_access(uri(arg2)[0]) == 0) {return false;}
	if (exists(arg1) == 0) {return false;}
	if ((exists(arg1) == 1) && (exists(arg2) == 0)) {
		try {
			fs::rename(arg1, (arg2));
			return true;
		} catch (...) {}
	}
	if ((exists(arg1) == 1) && (is_dir(arg2) == 1)) {
		try {
			fs::rename(arg1, (arg2 + "/" + uri(arg1)[1]));
			return true;
		} catch (...) {}
	}
	try {
		cp(arg1, arg2);
		rm(arg1);
		return true;
	} catch (...) {return false;}
}

bool rm(string arg="") {
	home(arg);
	if (exists(arg) == 0) {return false;}
	try {
		fs::remove_all(arg);
		return true;
	} catch (...) {return false;}
}

bool writeln(string arg1="", string arg2="") {
	home(arg1);
	FILE *fp = NULL;
	fp = fopen(arg1.c_str(), "a");
	if (!fp) {return false;}
	else {fprintf(fp, "%s\n", arg2.c_str());}
	fclose(fp);
	return true;
}

file_read read_txt(string arg="") {
	home(arg);
	file_read fr;
	fr.exist = false;
	fr.nrow = 0;
	fr.txt = "";
	FILE *fp = NULL;
	char c = '\0';
	int i = 0;
	fp = fopen(arg.c_str(), "r");
	if (fp) {
		if ((c = getc(fp)) != EOF) {
			i = 1;
			fr.txt += c;
		}
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

ifstream::pos_type fsize(string arg="") {
	home(arg);
	if (is_dir(arg)) {return 0;}
	ifstream in(arg, ifstream::ate | ifstream::binary);
	return in.tellg();
}

int sys(string arg="") {
	int c = 0;
	c = system(arg.c_str());
	return c;
}

vector<string> dir_lst(string arg="./") {
	vector<string> v;
	if (arg == "") {return {""};}
	home(arg);
	if (is_dir(arg) == false) {return {""};}
	for (const auto& entry:fs::directory_iterator(arg)) {
		v.push_back(entry.path());
	}
	if (v.size() == 0) {return {""};}
	sort(v.begin(), v.end(), doj::alphanum_less<string>());
	return v;
}

bool nil_dir(string arg="") {
	if (dir_lst(arg)[0] == "") {return true;}
	else {return false;}
}

vector<string> uri(string arg="") {
	string parent = fs::path(arg).remove_filename();
	home(parent);
	if (parent == "") {parent = pwd();}
	string fullname = fs::path(arg).filename();
	string basename = fs::path(arg).stem();
	string extension = fs::path(arg).extension();
	return {parent, fullname, basename, extension};
}

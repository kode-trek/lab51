string uname = getenv("USER");

/******************************************************************************/
bool write_access(string);
bool is_root(void);
string ts(string);
vector<string> dir_lst(string);
vector<string> uri(string);

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

string ts(string arg="") {
//	time_t now = time(0);
//	return "_" + to_string(now);
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
	else {return to_string(now);}
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

bool is_root(void) {
	if (uname == "root") {return true;}
	else {return false;}
//	if (getuid() == 0) {return true;}
//	else {return false;}
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
vector<string> uri(string arg="") {
	string parent = fs::path(arg).remove_filename();
	home(parent);
	if (parent == "") {parent = pwd();}
	string fullname = fs::path(arg).filename();
	string fname = fs::path(arg).stem();
	string ext = fs::path(arg).extension();
	return {parent, fullname, fname, ext};
}

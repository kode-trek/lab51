string uname = getenv("USER");

/******************************************************************************/
bool write_access(string);

bool is_root(void);

string ts(string);
vector<string> dir_lst(string);
vector<string> uri(string);
string as_is(string);
vector<int> unique(vector<int>);

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
	string basename = fs::path(arg).stem();
	string extension = fs::path(arg).extension();
	return {parent, fullname, basename, extension};
}

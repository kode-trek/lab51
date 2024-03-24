bool is_root(void) {
	if (uname == "root") {return true;}
	else {return false;}
//	if (getuid() == 0) {return true;}
//	else {return false;}
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

vector<string> uri(string arg="") {
	string parent = fs::path(arg).remove_filename();
	home(parent);
	if (parent == "") {parent = pwd();}
	string fullname = fs::path(arg).filename();
	string fname = fs::path(arg).stem();
	string ext = fs::path(arg).extension();
	return {parent, fullname, fname, ext};
}

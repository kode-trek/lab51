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

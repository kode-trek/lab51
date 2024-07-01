bool is_root(void) {
	if (uname == "root") {return true;}
	else {return false;}
//	if (getuid() == 0) {return true;}
//	else {return false;}
}

//is-root
bool root(...) {
#ifdef _WIN32
	if (uname() == "Administrator") return true; return false;
#endif
//	if (getuid()) return false; return true;
	if (uname() == "root") return true; return false;
}

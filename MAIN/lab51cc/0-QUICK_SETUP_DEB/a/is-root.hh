//is-root
bool root(...) {
#ifdef _WIN32
	if (uname() == "Administrator") return true; return false;
#endif
//	if (getuid()) return false; return true;
	if (uname() == "root") return true; return false;
}

// colorized [color] [text]

string color(string arg1, string arg2, ...) {
	#ifdef __linux__
	/*		variable(s)
	[v1]	color
	[v2]	code
	[v3]	text
	*/
	string v1 = arg1;
	string v2 = "00";
	string v3 = arg2;
	if (v1 == "red") v2 = "35";
	if (v1 == "green") v2 = "32";
	if (v1 == "yellow") v2 = "33";
	if (v1 == "blue") v2 = "34";
	v3 = "\033[1;" + v2 + "m" + v3 + "\033[0m";
	// op(s)
	return v3;
	#endif
	#ifdef _WIN32
	return arg2;
	#endif
}

string color(...) {return "";}

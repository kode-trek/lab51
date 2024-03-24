void _head(string arg1) {
	/*		variable(s)
	[v1]	switch
	[out]	color-output
	*/
	string v1 = arg1;
	string out = color("green", "[OK] ");
	// op(s)
	if (v1 == "on") {
		rm("/home/" + uname() + "/.area51/lab51cc/header/heads-up/");
		cp("/usr/lib/lab51cc/header/heads-up/", "~/.area51/lab51cc/header/");
		cout << out + "<heads-up> fixed." << endl;
	}
	if (v1 == "off") {
		rm("/home/" + uname() + "/.area51/lab51cc/header/heads-up/");
		cout << out + "<heads-up> un-linked." << endl;
	}
}

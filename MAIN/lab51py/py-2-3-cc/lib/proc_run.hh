void _run(string arg1, string arg2) {
	/*		variable(s)
	[v1]	python-script-file
	[v2]	python-version
	[inp]	color-input
	[cmd]	color-command
	*/
	string inp = color("blue", "[inp] ");
	string cmd = color("blue", "[] ");
	//
	string v1 = arg1;
	//
	string v2 = arg2;
	if (v2 == "") v2 = "-3";
	// op(s)
	if (v2 == "-2") {
		cout <<
		inp + uri(v1)[2] + "\n" +
		cmd + "python-2 " + quote(v1)
		<< endl;
	}
	if (v2 == "-3") {
		cout <<
		inp + uri(v1)[2] + "\n" +
		cmd + "python-3 " + quote(v1)
		<< endl;
	}
}

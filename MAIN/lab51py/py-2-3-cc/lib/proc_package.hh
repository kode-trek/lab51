void _package(string arg1) {
	/*		variable(s)
	[v1]	module
	[inp]	color-inp
	[cmd]	color-command
	[out]	color-output
	[err]	color-error/warning
	*/
	string inp = color("blue", "[inp] ");
	string cmd = color("blue", "[] ");
	string out = color("blue", "DONE.");
	string err = color("red", "[FAILED] ");
	//
	string v1 = arg1;
	// message(s)
	string msg1 = "upgrading PIP...";
	string msg2 = "installing/upgrading package...";
	// command(s)
	int e = 0;
	string cmd1 = "python -m pip install --upgrade pip";
	string cmd2 = "python -m pip install --upgrade " + quote(v1);
	// op(s)
	disp(cmd + msg1);
	e = sys(cmd1 + " 1> NUL 2> NUL");
	if (e) {
		cout << err + cmd1 << endl;
		k2c();
		exit(1);
	}
	cout << out << endl;
	//
	cout << inp + v1 << endl;
	disp(cmd + msg2);
	e = sys(cmd2 + " 1> NUL 2> NUL");
	if (e) {
		cout << err + cmd2 << endl;
		k2c();
		exit(1);
	}
	cout << out << endl;
	k2c();
}

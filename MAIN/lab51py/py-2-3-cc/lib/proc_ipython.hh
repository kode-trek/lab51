void _ipython() {
	/*		variable(s)
	[out]	color-output
	[cmd]	color-command
	[err]	color-error/warning
	*/
	string cmd = color("blue", "[] ");
	string out = color("blue", "DONE.");
	string err = color("red", "[FAILED] ");
	// message(s)
	string msg1 = "installing/upgrading IPython...";
	// command(s)
	int e = 0;
	string cmd1 = "python -m pip install --upgrade ipython";
	string cmd2 = "ipython";
	// op(s)
	disp(cmd + msg1);
	e = sys(cmd1 + " 1> NUL 2> NUL");
	if (e) {
		cout << err + cmd1 << endl;
		k2c();
		exit(1);
	}
	cout << out <<  endl;
	//
	e = sys(cmd2 + " 2> NUL");
	if (e) {
		cout << err + cmd2 << endl;
		k2c();
		exit(1);
	}
	k2c();
}

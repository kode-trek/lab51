void _help() {
	/*		variable(s)
	[v1]	pattern
	*/
	string v1 = color("blue", "[PATTERN] ");
	string v2 = color("yellow", "MS-Win-7 (6.1.7601 SP-1)");
	//
	cout <<
	v1 + "lab51py <.py[x]> [-<ver>=3]""\n"
	"executes <.py[x]> script-file via Python-3 (default).""\n"
	"if [-2] ONLY executes <.py[x]> script-file via Python-2.""\n"
	"all the rest features (pip, pyinstaller, ... ) has been discontinued""\n"
	"and not working for python-2 scripts.""\n" +
	v1 + "lab51py --ipython""\n"
	"provides an interactive IPython shell.""\n" +
	v1 + "lab51py --pkg <PIP-module>""\n"
	"retrieves/installs package(s) from 'PyPI.org' repo.""\n" +
	v1 + "lab51py --build <python-script.PY>""\n"
	"builds an EXEcutable (BINary) application.""\n" +
	v1 + "lab51py --mod <cython-script.PYX>""\n"
	"makes a (.so) extension. provides <sample.pyx> script.""\n" +
	v1 + "lab51py --src""\n"
	"fetches source-code.""\n" +
	"\n"
	"this Terminal-App has been tested on " + v2 + " platform."
	<< endl;
}

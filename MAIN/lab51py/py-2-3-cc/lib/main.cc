#include "proc_help.hh"
#include "proc_run.hh"
#include "proc_ipython.hh"
#include "proc_package.hh"
#include "proc_build.hh"
#include "proc_module.hh"
#include "proc_source.hh"

int main(int argc, char* argv[]) {
	/*		variable(s)
	[v1]	argument-1
	[v2]	argument-2
	[v3]	argument-3
	[v4]	color-title
	[v5]	color-help
	*/
	string v1, v2, v3 = "";
	if (argc > 1) v1 = argv[1];
	if (argc > 2) v2 = argv[2];
	if (argc > 3) v3 = argv[3];
	string v4 = color("blue", "-- L A B oratory 5 1 P Y thon --");
	string v5 = color("blue", " --help");
	// op(s)
	if (argc == 1) {
		cout <<
		v4 + "\n"
		"Framework for Python-2/3 developers.""\n"
		"lab51py" + v5
		<< endl;
		exit(0);
	}
	if (v1 == "--help") {
		_help();
		exit(0);
	}
	if (v1 == "--ipython") {
		_ipython();
		exit(0);
	}
	if (v1 == "--pkg") {
		_package(v2);
		exit(0);
	}
	if (v1 == "--build") {
		_build();
		exit(0);
	}
	if (v1 == "--mod") {
		_module();
		exit(0);
	}
	if (v1 == "--src") {
		_source();
		exit(0);
	}
	_run(v1, v2);
}

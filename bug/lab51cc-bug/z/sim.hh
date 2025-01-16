void sim(string arg1, string arg2, string arg3) {
	//proc_source
	if (arg1 == "--src") {cout << "!under maintenance!" << endl; exit(0);}
	//proc_module
	if (arg1 == "--lib") {
		if (arg2 == "--boost") {
			cout << "[...] retrieves and installs <boost> library." << endl;
			exit(0);
		}
		cout <<
		"[...] enlists included library paths.""\n"
		"[] gcc -xc++ -E -v -""\n"
		"[] ls ~/.area51/lab51cc/"
		<< endl;
		exit(0);
	}
	//proc_head
	if (arg1 == "--head") {
		if (arg2 == "on") {
			cout <<
			"[...] fixes <lab51cc> and setups <heads-up>.""\n"
			"[] sudo apt-get install --reinstall "
			"software-properties-common build-essential libc6-dev mingw-w64 -y""\n"
			"[] rm ~/.area51/lab51cc/heads-up.h""\n"
			"[] rm ~/.area51/lab51cc/heads/hpp""\n"
			"[] rm ~/.area51/lab51cc/heads-up.h.gz""\n"
			"[] cp /usr/lib/lab51cc/heads/hpp ~/.area51/lab51cc/""\n"
			"[] cp /usr/lib/lab51cc/heads/heads-up.h ~/.area51/lab51cc/"
			<< endl;
			exit(0);
		}
		if (arg2 == "off") {
			cout <<
			"[...] un-links <heads-up>.""\n"
			"[] gzip ~/.area51/lab51cc/heads-up.h"
			<< endl;
		}
	}
	//proc_build
	string inp = arg2;
	string full_name = uri(inp)[1];
	string file_name = uri(inp)[2];
	string out = file_name + "_" + ts();
	if (arg2 == "--cross") {cout << "!under maintenance!" << endl; exit(0);}
	cout <<
	"[...] compiles " << quote(uri(inp)[1]) << " script-file and building " <<
	quote(out) << " binary shared-library.""\n"
	"[] g++ " << quote(inp) << " -o " << quote(out) <<
	" -fconcepts -lstdc++fs -std=c++17 -pthread"
	" -I/home/" << uname() << "/.area51/lab51cc/"
	" -include/home/" << uname() << "/.area51/lab51cc/heads-up.h"
	<< endl;
}

#include <iostream>
#include <regex>

using namespace std;

/******************************************************************************/
vector<string> split(string, string);
string _2lower(string);
string _2upper(string);
long double s2n(string);
/******************************************************************************/
long double s2n(string arg) {
	stringstream geek(arg);
	long double n = 0.0;
	geek >> n;
	return n;
}

string type() {return "void";}
template <typename T>
string type(T const&) {return typeid(T).name();}

vector<string> split(string arg1="", string arg2=",") {
	vector<string> v = {};
	size_t pos = 0;
	string token;
	while ((pos = arg1.find(arg2)) != string::npos) {
		token = arg1.substr(0, pos);
		v.push_back(token);
		arg1.erase(0, pos + arg2.length());
	}
	v.push_back(arg1);
	return v;
}

string _2lower(string arg="") {
	transform(arg.begin(), arg.end(), arg.begin(), ::tolower);
	return arg;
}
string _2upper(string arg="") {
	transform(arg.begin(), arg.end(), arg.begin(), ::toupper);
	return arg;
}

int main() {
	cout <<
	"TYPE [ENTRY]""\n"
	"string type (auto)""\n"
	"------------------""\n"
	<< endl;
	//op(s)
	cout << type() << endl;
	cout << type("") << endl;
	cout << type("foo") << endl;
	cout << type("foo bar") << endl;
	cout << type(2) << endl;
	cout << type(3.14) << endl;
	cout << type(0) << endl;
	cout << type(1) << endl;
	cout << type(false) << endl;
	cout << type(true) << endl;
//	cout << type("arg1", "arg2") << endl;
}

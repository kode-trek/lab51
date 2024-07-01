int main(int argc, char* argv[]) {
 string arg1 = "";
 if (argc > 1) arg1 = argv[1];
 string arg2 = "";
 if (argc > 2) arg2 = argv[2];
 cout <<
 "--help""\n"
 "--setup""\n"
 "--run""\n"
// "--ipython""\n"
// "--mod <PyPI-package-name>""\n"
 "lab51py2-win64"
 << endl;
 if (arg1 == "--run") sys("python " + quote(arg2));
// if (arg1 == "--mod") sys("python -m pip install --upgrade " + quote(arg2));
// if (arg1 == "--ipython") sys("ipython");
}

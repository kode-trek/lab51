int main() {
 /* variable(s)
 [v1] temporary-folder
 [cmd] color-command
 [err] color-error/warning
 */
 string err1 = color("red", "HALTED.""\n""[FAILED] ");
 string cmd = color("blue", "[] ");
 //
// string v1 = R"(%userprofile%\Lab51Py2Win64_)" + ts();
 string v1 = R"(%userprofile%\Lab51Py2Win64_1648010525)";
 // message(s)
 string msg1 = cmd + "installing Lab51Py2Win64...";
 // command(s)
 int e = 0;
 string cmd1 = "ping python.org";
 string cmd2 = "md " + v1;
 string cmd3 = v1 + "\\python.exe --version";
 // op(s)
 disp(msg1);
 e = sys(cmd1 + " 1> NUL");
 if (e) {
  cout <<
  err1 + "unable to connect to <PyPI.org> for collecting packages."
  << endl;
  k2c(); // pausee();
  exit(1);
 }
// e = sys(cmd2);
//// setx path "%path%;%userprofile%"
// if (e) {
// cout << err1 + cmd2 << endl;
// exit(1);
// }
 e = sys(cmd3 + " 1> NUL 2> NUL");
 if (e) {
  cout <<
  err1 + "Lab51Py2 requires Python 2.7 which not installed/configured properly."
  << endl;
  exit(1);
 }
 cout << "DONE." << endl;
// python -m pip install --upgrade pip");
// sys("python -m pip install --upgrade ipython");
}

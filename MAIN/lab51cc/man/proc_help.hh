/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

void _help() {
 /* variable(s)
 [v1] pattern
 [v2] platform
 [v3] development
 */
 string v1 = mark("[PATTERN] ", "blue");
 string v2 = mark("Linux Mint 21.1 (vera)", "yellow");
 string v3 = mark("[DEVELOPMENT] ", "yellow");
 // op(s)
 cout <<
 v1 << "lab51cc --lib [-boost | <mod>]""\n"
 "if [--lib] enlists included library paths.""\n"
 "if [--lib -boost] retrieves and installs <boost> module.""\n"
 "if [--lib <mod>] adds <mod>ule to library '~/.area51/lab51cc'.""\n" <<
 v1 << "lab51cc --head <on | off>""\n"
 "facilitates scriptin' for more elegant n' less-cumbersome.""\n"
 "if <on> setups <heads-up> header-files. enables lab51cc.""\n"
 "if <off> un-links <heads-up> header-files. disables lab51cc.""\n" <<
 v1 << "lab51cc --src <function-head>""\n"
 "inspects through header-file(s) for function-body (inner-code) of "
 "<function-head>.""\n" <<
 v1 << "lab51cc <.Cx> [-cross | -dos32 | -dos64]""\n"
 "compiles <.Cx> script-file. builds binary shared-library for DEB-64.""\n"
 "if [-dos32] compiles <.Cx> script-file. builds <.EXE> for WINDOWS-32.""\n"
 "if [-dos64] compiles <.Cx> script-file. builds <.EXE> for WINDOWS-64.""\n"
 "if [-cross] compiles <.Cx> script-file. builds EXEcutable applications:""\n"
 "<*.OUT> for DEBIAN-64""\n"
 "<*.EXE> for WINDOWS-32""\n"
 "<*.EXE> for WINDOWS-64""\n"
 "\n"
 "this terminal-app had a test-drive on " << v2 << " platform.""\n" <<
 v3 << "github.com/kode-trek"
 << endl;
}

//	"<boost> library has been in widespread use for years.""\n"
//	"http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3505.html""\n"

//	"facilitates C++ scriptin'. makes code clean n' tidy.""\n"


/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

void proc_help_f1() {
 /* variable(s)
 [v1] pattern
 [v2] development
 [v3] platform
 */
 string v1 = mark("[PATTERN] ", "blue");
 string v2 = mark("[DEVELOPMENT] ", "blue");
 string v3 = "'Linux Mint 21.3 (victoria)'";
 // op(s)
 cout <<
 v1 + "lab51cc --mod [--boost | <module>]""\n"
 "if [--mod] enlists included library paths.""\n"
 "if [--mod --boost] retrieves and installs 'boost' module.""\n"
 "if [--mod <mod>] adds <module> to '~/.area51/lab51cc' library.""\n" +
 v1 + "lab51cc --inspect <function-head>""\n"
 "looks through library-file(s) for inner-code of <function-head>.""\n" +
 v1 + "lab51cc <.Cx> [--dos32 | --dos64 | --cross]""\n"
 "compiles <.Cx> script-file. builds binary shared-library for DEB-64.""\n"
 "if [--dos32] compiles <.Cx> script-file. builds <.EXE> for WINDOWS-32.""\n"
 "if [--dos64] compiles <.Cx> script-file. builds <.EXE> for WINDOWS-64.""\n"
 "if [--cross] compiles <.Cx> script-file. builds EXEcutable applications:""\n"
 "<*.OUT> for DEBIAN-64""\n"
 "<*.EXE> for WINDOWS-32""\n"
 "<*.EXE> for WINDOWS-64""\n" +
 v2 + "this terminal-app had a test-drive on " + v3 + " platform.""\n"
 "github.com/kode-trek"
 << endl;
}

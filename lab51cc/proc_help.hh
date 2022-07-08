/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
void _help() {
 /* variable(s)
 [v1] pattern
 [v2] platform
 [v3] development
 */
 string v1 = mark("blue", "[PATTERN] ");
 string v2 = mark("yellow", "Linux Mint 20.3 (una)");
 string v3 = mark("yellow", "[DEVELOPMENT] ");
 cout <<
 v1 + "lab51cc --lib [-boost | <mod>]""\n"
 "(--lib) enlists included library paths.""\n"
 "(--lib -boost) retrieves and installs <boost> library which has been in "
 "widespread use for years. http://www.open-std.org/jtc1/sc22/wg21/docs/papers/"
 "2013/n3505.html""\n"
 "(--lib <mod>) adds <mod>ule to library collection: '~/.area51/lab51cc'.""\n" +
 v1 + "lab51cc --head <on | off>""\n"
 "facilitates scriptin' for more elegant n' less-cumbersome.""\n"
 "(on) setups <heads-up> header-files. enables lab51cc.""\n"
 "(off) un-links <heads-up> header-files. disables lab51cc.""\n" +
 v1 + "lab51cc --src <function-head>""\n"
 "investigates through header-file(s) for function-body (inner-code) of "
 "<function-head>.""\n" +
 v1 + "lab51cc <.Cx> [--cross | --dos32 | --dos64]""\n"
 "compiles <.Cx> script-file. builds binary shared-library for DEB-64.""\n"
 "(--dos32) compiles <.Cx> script-file. builds <.EXE> for WINDOWS-32.""\n"
 "(--dos64) compiles <.Cx> script-file. builds <.EXE> for WINDOWS-64.""\n"
 "(--cross) compiles <.Cx> script-file. builds EXEcutable applications:""\n"
 "<.OUT> for DEBIAN-64""\n"
 "<.EXE> for WINDOWS-32""\n"
 "<.EXE> for WINDOWS-64""\n"
 "\n"
 "this terminal-app has been tested on " + v2 + " platform.""\n" +
 v3 + "github.com/kode-trek"
 << endl;
}

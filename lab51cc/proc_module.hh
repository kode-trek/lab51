/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
void _module(string arg1) {
 /* variable(s)
 [v1] library
 */
 string cmd = mark("blue", "[] ");
 //
 string v1 = arg1;
 // op(s)
 if (v1 == "-boost") {
  cout << "adds <boost>." << endl;
//sudo apt-get install libboost-dev -y
//https://www.boost.org/users/download/
  exit(0);
 }
 if (v1 != "") {
  cout << "adds " + quote(v1) + " to ~/.area51/lab51cc/" << endl;
  exit(0);
 }
 cout <<
 "Included PATHs:""\n""\n" +
 cmd + "gcc -xc++ -E -v -""\n" +
 cmd + "ls ~/.area51/lab51cc/"
 << endl;
}

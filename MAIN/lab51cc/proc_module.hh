/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

void proc_module_f1(string arg1) {
 /* variable(s)
 [v1] library
 */
 string inp1 = mark("[INP] ", "blue");
 string out1 = mark("[OUT] ", "blue");
 string out2 = mark("DONE.", "green");
 string out3 = mark("[PATH] ", "blue");
 string cmd = mark("[] ", "blue");
 //
 string v1 = arg1;
 // message(s)
 string msg1 = "adding <boost> library...";
 string msg2 =
 inp1 + v1 + "\n" +
 out1 + "~/.area51/lab51cc/" + uri(v1, "full-name") + "\n" +
 cmd + "adding library to the collection...";
 string msg3 =
 out3 + "gcc -xc++ -E -v -""\n" +
 out3 + "ls ~/.area51/lab51cc/";
 // op(s)
 if (v1 == "--boost") {
  note(cmd + msg1);
  cout << out2 << endl;
//sudo apt-get install libboost-dev -y
//https://www.boost.org/users/download/
  exit(0);
 }
 if (v1 != "") {
  note(msg2);
  cout << out2 << endl;
  exit(0);
 }
 cout << msg3 << endl;
}

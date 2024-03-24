/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

#include "proc_build_deb.hpp"
#include "proc_build_dos32.hpp"
#include "proc_build_dos64.hpp"

void proc_build_f1(string arg1, string arg2, string arg3) {
 /*  variable(s)
 [v1] input-script
 [v2] operation
 [v3] simulation
 */
 string deb = mark("[DEBIAN] ", "blue");
 string dos32 = mark("[DOSx32] ", "blue");
 string dos64 = mark("[DOSx64] ", "blue");
 //
 string v1 = arg1;
 string v2 = arg2;
 string v3 = arg3;
 string v4 = "~";
 if (uname() == "root") v4 = "/root";
 if (uname() != "root") v4 = "/home/" + uname();
 // op(s)
 if ((v3 == "--head") and (v2 == "--cross")) {
  cout <<
  deb + "g++ " + quote(v1) + " -o DEB.OUT -fconcepts"
  " -I" + v4 + "/.area51/lab51cc/"
  " -include" + v4 + "/.area51/lab51cc/heads-up/deb-dos.hh"
  << endl;
  cout <<
  dos32 + "i686-w64-mingw32-g++ " + quote(v1) + " -o DOSx32.EXE"
  " -fconcepts -static-libgcc -static-libstdc++ -lstdc++fs -std=c++2a -pthread"
  " -I" + v4 + "/.area51/lab51cc/"
  " -include" + v4 + "/.area51/lab51cc/heads-up/deb-dos.hh"
  << endl;
  cout <<
  dos64 + "x86_64-w64-mingw32-g++ " + quote(v1) + " -o DOSx64.EXE"
  " -fconcepts -static-libgcc -static-libstdc++ -lstdc++fs -std=c++2a -pthread"
  " -I" + v4 + "/.area51/lab51cc/"
  " -include" + v4 + "/.area51/lab51cc/heads-up/deb-dos.hh"
  << endl;
  exit(0);
 }
 if ((v3 == "--head") and (v2 == "--dos64")) {
  cout <<
  dos64 + "x86_64-w64-mingw32-g++ " + quote(v1) + " -o DOSx64.EXE"
  " -fconcepts -static-libgcc -static-libstdc++ -lstdc++fs -std=c++2a -pthread"
  " -I" + v4 + "/.area51/lab51cc/"
  " -include" + v4 + "/.area51/lab51cc/heads-up/deb-dos.hh"
  << endl;
  exit(0);
 }
 if ((v3 == "--head") and (v2 == "--dos32")) {
  cout <<
  dos32 + "i686-w64-mingw32-g++ " + quote(v1) + " -o DOSx32.EXE"
  " -fconcepts -static-libgcc -static-libstdc++ -lstdc++fs -std=c++2a -pthread"
  " -I" + v4 + "/.area51/lab51cc/"
  " -include" + v4 + "/.area51/lab51cc/heads-up/deb-dos.hh"
  << endl;
  exit(0);
 }
 if (v2 == "--head") {
  cout <<
  deb + "g++ " + quote(v1) + " -o DEB.OUT -fconcepts"
  " -I" + v4 + "/.area51/lab51cc/"
  " -include" + v4 + "/.area51/lab51cc/heads-up/deb-dos.hh"
  << endl;
  exit(0);
 }
 if (v2 == "--cross") {
  deb_f1(v1);
  cout << endl;
  dos32_f1(v1);
  cout << endl;
  dos64_f1(v1);
  exit(0);
 }
 if (v2 == "--dos32") {
  dos32_f1(v1);
  exit(0);
 }
 if (v2 == "--dos64") {
  dos64_f1(v1);
  exit(0);
 }
 deb_f1(v1);
}

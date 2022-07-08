/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
using namespace std;
#include "proc_build.hh"
#include "proc_head.hh"
#include "proc_help.hh"
#include "proc_module.hh"
#include "proc_source.hh"
int main(int argc, char* argv[]) {
 /* variable(s)
 [v1] argument-1
 [v2] argument-2
 [v3] argument-3
 */
 string title = mark("blue", "-- L A B oratory 5 1 C C --");
 string help = mark("blue", " --help");
 //
 string v1, v2, v3 = "";
 if (argc > 1) v1 = argv[1];
 if (argc > 2) v2 = argv[2];
 if (argc > 3) v3 = argv[3];
 // op(s)
 if (argc == 1) {
  cout <<
  title + "\n"
  "framework for C/C++ development.""\n"
  "lab51cc" + help
  << endl;
  exit(0);
 }
 if (v1 == "--lib") {
  _module(v2);
  exit(0);
 }
 if (v1 == "--head") {
  _head(v2);
  exit(0);
 }
 if (v1 == "--src") {
  _source(v2);
  exit(0);
 }
 if (v1 == "--help") {
  _help();
  exit(0);
 }
 _build(v1, v2);
}

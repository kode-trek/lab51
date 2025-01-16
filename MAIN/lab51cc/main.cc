/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

using namespace std;

#include "proc_build.hh"
#include "proc_export.hh"
#include "proc_help.hh"
#include "proc_module.hh"
#include "proc_source.hh"

int main(int argc, char* argv[]) {
 /* variable(s)
 [v1] input-script | operation
 [v2] operation | input-script
 [v3] simulation
 */
 string out1 = mark("[OUT] ", "blue");
 string err1 = mark("[WARNING] ", "yellow");
 //
 string v1, v2, v3 = "";
 if (argc > 1) v1 = argv[1];
 if (argc > 2) v2 = argv[2];
 if (argc > 3) v3 = argv[3];
 // op(s)
 if (argc == 1) {
  cout <<
  mark("-- LABoratory area-51 CC --", "blue") + "\n"
  "framework for C/C++ development.""\n"
  "lab51cc" + mark(" --help", "blue")
  << endl;
  exit(0);
 }
 if (v1 == "--help") {
  proc_help_f1();
  exit(0);
 }
 if (v1 == "--mod") {
  proc_module_f1(v2);
  exit(0);
 }
 if (v1 == "--inspect") {
  proc_source_f1(v2);
  exit(0);
 }
 if (v1 == "--export") {
  proc_export_f1(v2);
  exit(0);
 }
 proc_build_f1(v1, v2, v3);
}

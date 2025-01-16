/*
 The MIT License (MIT)
 Copyright (c) 2025 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

#include "proc_build_deb.hpp"
#include "proc_build_dos32.hpp"
#include "proc_build_dos64.hpp"

void proc_build_f1(string arg1, string arg2) {
 /*  variable(s)
 [v1] input-script
 [v2] operation
 */
 string deb = mark("[DEBIAN] ", "blue");
 string dos32 = mark("[DOSx32] ", "blue");
 string dos64 = mark("[DOSx64] ", "blue");
 //
 string v1 = arg1;
 string v2 = arg2;
 // op(s)
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

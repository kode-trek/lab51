/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

void enlist(vector<float> arg1, bool arg2 = true, ...) {
 /* variable(s)
 [v1] vector-of-number(s)
 [v2] neat (on=brief | off=all)
 */
 vector<float> v1 = arg1;
 bool v2 = arg2;
 // op(s)
 if ((v2) and (v1.size() > 4)) {
  cout <<
  "1. " + str(v1[0]) + "\n"
  "2. " + str(v1[1]) + "\n"
  "   ""[...]""\n" +
  str(v1.size() - 1) + ". " + str(v1[v1.size() - 2]) + "\n" +
  str(v1.size()) + ". " + str(v1[v1.size() - 1])
  << endl;
 }
 if ((not v2) or ((v2) and (v1.size() <= 4)))
  for (int i = 0; i < v1.size(); i++)
   cout << v1[i] << endl;
}

void enlist(vector<string> arg1, bool arg2 = true, ...) {
 /* variable(s)
 [v1] vector-of-string(s)
 [v2] neat (on=brief | off=all)
 */
 vector<string> v1 = arg1;
 bool v2 = arg2;
 // op(s)
 if ((v2) and (v1.size() > 4)) {
  cout <<
  "1. " + v1[0] + "\n"
  "2. " + v1[1] + "\n"
  "   ""[...]""\n" +
  str(v1.size() - 1) + ". " + v1[v1.size() - 2] + "\n" +
  str(v1.size()) + ". " + v1[v1.size() - 1]
  << endl;
 }
 if ((not v2) or ((v2) and (v1.size() <= 4)))
  for (int i = 0; i < v1.size(); i++)
   cout << v1[i] << endl;
}

void enlist(...) {}

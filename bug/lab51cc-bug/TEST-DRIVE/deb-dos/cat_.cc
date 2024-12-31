/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 if (not write_access()) {
  cout <<
  mark("[out] ", "blue") << pwd() << "\n" <<
  mark("[WARNING] ", "yellow") << "write-permission denied."
  << endl;
  exit(0);
 }
 string wd = ts(); md(wd); cd(wd);
 cout <<
 "READ [TEXT-FILE] (IN " << wd << ")""\n"
 "string cat_ (string, string)""\n"
 "================================""\n"
 << endl;
 //
 drop("F1", "Line#1");
 cout << cat_("F1", "nrow") << "\n--\n" << cat_("F1", "text") << endl << endl;
 cout << "----" << endl;
 //
 rm("F1");
 drop("F1");
 cout << cat_("F1", "nrow") << "\n--\n" << cat_("F1", "text") << endl << endl;
 cout << "----" << endl;
 //
 drop("F1", "Line#1""\n""Line#2");
 cout << cat_("F1", "nrow") << "\n--\n" << cat_("F1", "text") << endl << endl;
 cout << "----" << endl;
 //
 cout << cat_("F1") << endl;
 cout << "----" << endl;
 //cleans-up
 pausee(); cd(".."); rm(wd);
}

//via GEDIT // adds one extra line '\n'
// string v1 = cat("q.cc");
// cout << cat("q.cc", "nrow") << endl;
// cout << cat("q.cc")[v1.size() - 2] << endl;
// cout << cat("q.cc")[v1.size() - 1] << endl;
// cout << cat("q.cc")[v1.size()] << endl;
// if (cat("q.cc")[v1.size()] == '\0') cout << "YES-0" << endl;
// if (cat("q.cc")[v1.size() - 1] == '\n') cout << "YES-1" << endl;

//repeat above via 'echo -n TEXT > FILENAME' // no extra line

//also repeat that via 'touch FILENAME'

//also <DROP("E")> codeline

// drop("E"); // THIS CODE-LINE
// string v1 = cat("E");
// cout << cat("E", "nrow") << endl;
// cout << cat("E")[v1.size() - 2] << endl;
// cout << cat("E")[v1.size() - 1] << endl;
// cout << cat("E")[v1.size()] << endl;
// if (cat("E")[v1.size()] == '\0') cout << "YES-0" << endl;
// if (cat("E")[v1.size() - 1] == '\n') cout << "YES-1" << endl;


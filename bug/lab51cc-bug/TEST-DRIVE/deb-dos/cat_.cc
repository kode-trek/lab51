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

		md("D1");
		v0 = cat("D1");
		cout << v0.nrow << endl << v0.txt << endl << endl;
		cout << "------" << endl;

		v0 = cat("NA"); // not-available
		cout << v0.nrow << endl << v0.txt << endl << endl;
		cout << "------" << endl;


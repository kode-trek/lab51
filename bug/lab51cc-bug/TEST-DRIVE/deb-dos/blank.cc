int main() {
 /* variable(s)
 [v1] working-directory
 */
 if (not write_access()) {
  cout <<
  mark("[out] ", "blue") << pwd() << "\n" <<
  mark("[WARNING] ", "yellow") << "write-permission denied."
  << endl;
  exit(0);
 }
 string wd = ts(); md(wd); cd(wd);
 cout <<
 "IS-EMPTY [FILE/FOLDER] (IN " << wd << ")""\n"
 "int blank (string)""\n"
 "============================================"
 << endl;
 // op(s)
 drop("empty-file");
 cout << blank("empty-file") << endl;
 cout << "----" << endl;
 //
 drop("non-empty-file", "Line#1");
 cout << blank("non-empty-file") << endl;
 cout << "----" << endl;
 //
 cout << blank() << endl;
 cout << "----" << endl;
 //
 md("empty-directory");
 cout << blank("empty-directory") << endl;
 cout << "----" << endl;
 //
 cout << blank("test-na") << endl; // not-available (not-exist)
 // clean-up
 pausee(); cd(".."); rm(wd);
}

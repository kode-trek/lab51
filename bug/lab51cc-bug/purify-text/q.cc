int main (int argc, char* argv[]) {
 if (argc < 2) {
  cout << "needs 1 argument." << endl;
  exit(0);
 }
 /* variable(s)
 [v1] valid-string
 [argv[1]] entry sudo-text file that may contain invalid characters
 [v2] name of text-file with invalid characters excluded.
 */
 string v1 = "";
 v1 = cat(argv[1]);
 string v2 = ts();
 // message(s)
 string msg1 = "purifying contaminated text-file...";
 // op(s)
 note(msg1);
 int e = drop(v2, v1);
 if (not e) {
  cout <<
  "DONE.""\n"
  "[out] " + v2
  << endl;
  exit(0);
 }
 cout << "\n""[FAILED] write-permission denied." << endl;
}

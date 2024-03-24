int main (int argc, char* argv[]) {
 if (argc < 2) {
  cout << "needs at least 1 argument." << endl;
  exit(0);
 }
 string v1 = cat(argv[1]);
 for (int i = 0; i < v1.size(); i++) {
  cout << v1[i] << endl;
//  if (not ascii(v1[i])) {
//   cout << "non-ascii file." << endl;
//   exit(0);
  }
// cout << "ascii file." << endl;
}

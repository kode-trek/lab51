int main () {
 vector<string> v1 = tree(".");
 string v2 = "";
 vector<string> v3 = {};
 bool flg = false;
 for (int i = 0; i < v1.size(); i++) {
  v2 = v1[i];
  if (has(v2, "?")) {
   v2 = replace_all(v2, "?", "_");
   flg = 1;
  }
  if (has(v2, "|")) {
   v2 = replace_all(v2, "|", "_");
   flg = 1;
  }
  if (flg) v3.push_back(v2);
  if (not flg) v3.push_back(v1[i]);
  v2 = "";
  flg = 0;
 }
 for (int i = 0; i < v1.size(); i++)
  cout << v1[i] << endl << v3[i] << endl << endl;
}

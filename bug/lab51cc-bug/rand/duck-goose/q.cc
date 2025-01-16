void f2 (vector<int> arg1) {
 for (int i = 0; i < arg1.size(); i++) cout << arg1[i] << " ";
 cout << endl;
}

vector<int> f1 (int arg1 = 1, int arg2 = 1, int arg3 = 1) {
 vector<int> v1 = {};
 int v2 = 0;
 int c = arg3;
 seedr();
 for (int i = 0; i < c; i++) {
  v2 = arg1 + (rand() % (arg2 - arg1 + 1));
  v1.push_back(v2);
  if (v1.size() != unique(str(v1)).size()) {
   v1.pop_back();
   c++;
  }
 }
 return v1;
}

vector<int> f1_ (int arg1 = 1, int arg2 = 1, int arg3 = 1) {
 vector<int> v1 = {};
 int v2 = 0;
 int c = arg3;
 seedr();
 for (int i = 0; i < c; i++) {
  v2 = arg1 + (rand() % (arg2 - arg1 + 1));
  v1.push_back(v2);
 }
 return v1;
}

int main () {
 /* var(s)
 [v1] number of players: (5 ~ 10)
 [v2] dice
 [v3] speed of each players: (1 ~ 2)
 [v4] duck-goose (false|true)
 */
 int v1 = 5;
 int v2 = 0;
 vector<int> v3 = {};
 bool v4 = false;
 int d1 = 0;
 int d2 = 0;
 int p1 = 0;
 int p2 = 0;
 int w1, w2 = 0;
 //op(s)
 v1 = f1(5, 10)[0];
 v2 = f1(1, v1)[0];
 v3 = f1_(1, 2, v1);
 cout << "[v1] " << v1 << endl;
 cout << "[chaseR] " << v2 << endl;
 cout << "====" << endl;
 // play
 for (int i = 1; i <= v1; i++) cout << i << "\t";
 cout << "[PLAYERS]" << endl;
 for (int i = 1; i <= v1; i++) cout << v3[i - 1] << "\t";
 cout << "[P-SPEED]" << endl;
 w1 = v2;
 int c = v2;
 cout << endl;
 string ans = "";
 while (true) {
  if ((c % v1) == 0) c = 1;
  else c++;
  cout << "P" << c << " (1-DUCK | 2-GOOSE)? ";
  cin >> ans;
  if (ans == "1") p1 = c;
  if (ans == "2") {
   p2 = c;
   w2 = c;
   break;
  }
 }
 cout << "****" << endl;
 //
 d1 = v3[w1 - 1];
 d2 = v3[w2 - 1];
// cout << d1 << "\t" << d2 << endl;
 p1 += 2;
 if (p1 > v1) p1 = p1 % v1;
 cout << p2 << "\t" << p1 << endl;
 cout << "####" << endl;
 //
 while (true) {
//  if ((p1 % w1) == 0) {
//   cout << "[P1] WON!" << endl;
//   break;
//  }
//  if (p2 == p1) {
//   cout << "[P2] WON!" << endl;
//   break;
//  }
//  note("[P2] " + str(p2) + "\t""[P1] " + str(p1));
//  note("\r");
  cout << p2 << "\t" << p1 << endl;
  p1 += d1;
  p2 += d2;
  sleep(1);
 }
}

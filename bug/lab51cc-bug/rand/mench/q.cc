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

int main() {
 int dice = 0;
 int ans = 0;
 int p1, p2, p3, p4 = 0;
 int turn = 1;
 //
 while (turn == 1) {
 cout << "1. Roll" << endl;
 cout << "2. BOARD" << endl;
 cout << ">> ";
 cin >> ans;
 cout << endl;
 if (ans == 2) {
  sys("clear");
  cout << "[P1] " << p1 << endl;
  cout << "[P2] " << p2 << endl;
  cout << "[P3] " << p3 << endl;
  cout << "[P4] " << p4 << endl;
  cout << "=======" << endl;
 }
 while (ans == 1) {
  sleep(2);
  dice = f1(1, 6)[0];
  cout << "[DICE]""\t" << dice << endl;
  if ((p1 + dice) <= 44) p1 += dice;
  cout << "[P1]""\t" << p1 << endl;
  if ((p1 == 44) or (p1 == 43) or (p1 == 42) or (p1 == 41)) {
   cout << "p1-reached!" << endl;
   turn = 0;
  }
  cout << endl;
  if (dice != 6) break;
 }
 while (ans == 1) {
  sleep(2);
  dice = f1(1, 6)[0];
  cout << "[DICE]""\t" << dice << endl;
  if ((p2 + dice) <= 44) p2 += dice;
  cout << "[P2]""\t" << p2 << endl;
  if ((p2 == 44) or (p2 == 43) or (p2 == 42) or (p2 == 41)) {
   cout << "p2-reached!" << endl;
   turn = 0;
  }
  cout << endl;
  if (dice != 6) break;
 }
 while (ans == 1) {
  sleep(2);
  dice = f1(1, 6)[0];
  cout << "[DICE]""\t" << dice << endl;
  if ((p3 + dice) <= 44) p3 += dice;
  cout << "[P3]""\t" << p3 << endl;
  if ((p3 == 44) or (p3 == 43) or (p3 == 42) or (p3 == 41)) {
   cout << "p3-reached!" << endl;
   turn = 0;
  }
  cout << endl;
  if (dice != 6) break;
 }
 while (ans == 1) {
  sleep(2);
  dice = f1(1, 6)[0];
  cout << "[DICE]""\t" << dice << endl;
  if ((p4 + dice) <= 44) p4 += dice;
  cout << "[P4]""\t" << p4 << endl;
  if ((p4 == 44) or (p4 == 43) or (p4 == 42) or (p4 == 41)) {
   cout << "p4-reached!" << endl;
   turn = 0;
  }
  if (dice != 6) break;
 }
 cout << endl << endl;
 }
}

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

int main () {
// vector<int> v1 = f1(2, 99, 40);
 vector<int> v1 = {};
 vector<int> v2 = {};
 vector<int> v3 = {};
 vector<int> v4 = {};
 int x = 2;
 int y = 99;
 int dice = f1(0, 6)[0];
 int p1 = 1;
 int p2 = 1;
 //
  y = x + 23;
  v1 = f1(x, y, 10);
  x = y + 1;
  //
  y = x + 23;
  v2 = f1(x, y, 10);
  x = y + 1;
  //
  y = x + 23;
  v3 = f1(x, y, 10);
  x = y + 1;
  //
  y = x + 23;
  v4 = f1(x, y, 10);
  x = y + 1;
/*
  // SIM
  while(true) {
  dice = f1(0, 6)[0];
  if ((p1 <= 100) and ((p1 + dice) <= 100)) p1 = p1 + dice;
  sleep(1);
  dice = f1(0, 6)[0];
  if ((p2 <= 100) and ((p2 + dice) <= 100)) p2 = p2 + dice;
  cout << endl;

 for (int i = 0; i < 5; i++) if (p1 == v1[i]) p1 = v8[i];
 for (int i = 0; i < 5; i++) if (p1 == v3[i]) p1 = v6[i];
 for (int i = 0; i < 5; i++) if (p1 == v5[i]) p1 = v4[i];
 for (int i = 0; i < 5; i++) if (p1 == v7[i]) p1 = v2[i];

 for (int i = 0; i < 5; i++) if (p2 == v1[i]) p2 = v8[i];
 for (int i = 0; i < 5; i++) if (p2 == v3[i]) p2 = v6[i];
 for (int i = 0; i < 5; i++) if (p2 == v5[i]) p2 = v4[i];
 for (int i = 0; i < 5; i++) if (p2 == v7[i]) p2 = v2[i];

  if (p1 == 100) {cout << "[p1] WON!" << endl; exit(0);}
  if (p2 == 100) {cout << "[p2] WON!" << endl; exit(0);}

  cout << "[P1] " << p1 << endl;
  cout << "[P2] " << p2 << endl;
  cout << endl;
  }
*/
  string ans = "1";
  // PLAY
  while(ans == "1") {
  sys("clear");

  // BOARD
  cout << endl << "LADDER" << endl;
  for (int i = 0; i < 10; i++) cout << v1[i] << "=>" << v4[i] << "\t";
  //
  cout << endl << "SNAKE" << endl;
  for (int i = 0; i < 10; i++) cout << v3[i] << "=>" << v2[i] << "\t";
  //
  cout << endl << endl;

  for (int i= 1; i <= 100; i++) {
   cout << "[" << i << "]";
   if (p1 == i) note("P1", "yellow");
   if (p2 == i) note("P2", "blue");
   cout << "\t";
   if (i % 10 == 0) cout << "\n\n\n";
  }

  if (ans == "1") dice = f1(0, 6)[0];
  else exit(0);
  if ((p1 <= 100) and ((p1 + dice) <= 100)) p1 = p1 + dice;
  sleep(1);
  dice = f1(0, 6)[0];
  if ((p2 <= 100) and ((p2 + dice) <= 100)) p2 = p2 + dice;

 for (int i = 0; i < 10; i++) if (p1 == v1[i]) p1 = v4[i];
 for (int i = 0; i < 10; i++) if (p1 == v3[i]) p1 = v2[i];

 for (int i = 0; i < 10; i++) if (p2 == v1[i]) p2 = v4[i];
 for (int i = 0; i < 10; i++) if (p2 == v3[i]) p2 = v2[i];

  if (p1 == 100) {cout << "[p1] WON!" << endl; exit(0);}
  if (p2 == 100) {cout << "[p2] WON!" << endl; exit(0);}

  cout << "ROLL? "; cin >> ans;
  }
}

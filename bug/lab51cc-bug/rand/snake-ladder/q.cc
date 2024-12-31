int f1 (int arg1 = 1, int arg2 = 1) {
 sleep(1);
 seedr();
 if (arg2 == 1) return rand();
 int v1 = arg1 + (rand() % (arg2 - arg1 + 1));
 return v1;
}

void f2 (vector<int> arg1) {
 for (int i = 0; i < arg1.size(); i++) cout << arg1[i] << " ";
 cout << endl;
}

int roll() {return f1(1, 6);}

int main () {
 int v1 = 1;
 int v2 = 1;
 vector<int> v3 = {};
 vector<int> v4 = {};
 vector<int> v5 = {};
 int idx = 0;
 int c = 0;
 int p1 = 0;
 int p2 = 0;
 int w1 = 1;
 int w2 = 1;
 //
 note("[] loading game (takes 20s)...");
 for (int i = 1; i <= 100; i++) v5.push_back(i);
 for (int i = 0; i < 10; i++) {
  idx = f1(0, 99 - c);
  v3.push_back(v5[idx]);
  v5.erase(v5.begin() + idx);
  c++;
 }
 for (int i = 0; i < 10; i++) {
  idx = f1(0, 99 - c);
  v4.push_back(v5[idx]);
  v5.erase(v5.begin() + idx);
  c++;
 }
 cout << "DONE." << endl;
 cout << "[LADDER] ""\t";
 f2(v3);
 cout << "[SNAKE] ""\t";
 f2(v4);
 // PLAY
 p1 = roll();
 p2 = roll();
 cout << "[COMPUTER]""\t" << p1 << " " << w1 + p1 << endl;
 w2 += p2;
 cout << "[PLAYER]""\t" << p2 << " " << w2 + p2 << endl;
 w2 += p2;
 p1 = roll();
 p2 = roll();
 cout << "[COMPUTER]""\t" << p1 << " " << w1 + p1 << endl;
 w2 += p2;
 cout << "[PLAYER]""\t" << p2 << " " << w2 + p2 << endl;
 w2 += p2;
}

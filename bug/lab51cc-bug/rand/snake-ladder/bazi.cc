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
 vector<int> v1 = f1(2, 99, 40);
 vector<int> v2 = {};
 vector<int> v3 = {};
 vector<int> v4 = {};
 vector<int> v5 = {};
 //
 for (int i = 0; i < 10; i++) v2.push_back(v1[i]);
 for (int i = 10; i < 20; i++) v4.push_back(v1[i]);
 for (int i = 20; i < 30; i++) v3.push_back(v1[i]);
 for (int i = 30; i < 40; i++) v5.push_back(v1[i]);
 cout << "[LADDER-START] ""\t";
 f2(v2);
 cout << "[LADDER-STOP] ""\t";
 f2(v4);
 cout << "[SNAKE-START] ""\t";
 f2(v3);
 cout << "[SNAKE-STOP] ""\t";
 f2(v5);
}

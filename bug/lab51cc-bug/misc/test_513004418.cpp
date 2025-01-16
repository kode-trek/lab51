#include "heads-up.h"
int main(int argc, char* argv[]) {
	vector<string> l = dir_lst("~/Documents");
	long double tot = 0;
	for (int i = 0; i < l.size(); i++) {tot += fsize(l[i]);}
	cout << tot << endl;
}

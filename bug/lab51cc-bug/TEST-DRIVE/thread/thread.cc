/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

// func-1
void f1(int arg1) {
	wait(arg1);
	cout << "TIME-OUT!" << endl;
	exit(0);
}

// func-2
void f2(bool arg1) {
	// var(s)
	string v1 = "";
	// op(s)
	note("pass: ");
	cin >> v1;
	if (v1 == "admin") {
		cout << "access granted." << endl;
		exit(0);
	}
	cout << "access denied!" << endl;
	exit(0);
}

// runs <func-1> and <func-2> at same time.
int main() {
	thread t1(f1, 4); // gets <time-out> if no entries put after 4 seconds.
	thread t2(f2, true);
	t2.join();
	t1.join();
}

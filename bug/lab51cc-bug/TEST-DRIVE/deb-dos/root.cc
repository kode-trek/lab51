/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/
	// 1-1. <WIN-key + R>
	// 1-2. cmd
	// 2-1. net user administrator /active:yes
	// 3-1. logout
	// 3-2. login as Administrator
	// 2-2. net user administrator /active:no
#ifdef __linux__
int main() {
	cout <<
	"IS-ROOT""\n"
	"bool ROOT (void)""\n"
	"----------------""\n"
	<< endl;
	//op(s)
	if (root()) cout << "ROOT" << endl;
	if (not root()) cout << "NON-ROOT" << endl;
}
#elif _WIN32
int main() {return 0;}
#endif

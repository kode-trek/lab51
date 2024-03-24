/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "PRESS-ANY-KEY-TO-CONTINUE.""\n" // ANY-KEY? OR ENTER-KEY?
 "void pausee (void)""\n"
 "==========================""\n"
 << endl;
 //op(s)
 pausee();
}

#ifdef __linux__
int main() {
	cout <<
	"PRESS-ANY-KEY-TO-CONT.""\n"
	"void K2C (void)""\n"
	"----------------------""\n"
	<< endl;
	//op(s)
	k2c();
}
#elif _WIN32
int main() {
	cout <<
	"PRESS-ANY-KEY-TO-CONT.""\n"
	"----------------------""\n"
	<< endl;
	//op(s)
	k2c();
}
#endif

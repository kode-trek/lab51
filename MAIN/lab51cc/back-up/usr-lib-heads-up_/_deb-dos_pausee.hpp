/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

bool pausee(...) {
 cout << "press " << mark("ENTER", "blue") << " to continue..";
 cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
 return false;
}

//void pausee(bool arg1 = false, ...) {
// #ifdef __linux__
// note("press " + mark("blue", "ENTER") + " key to continue...");
// cin.get();
// if (arg1) cin.get();
// #endif
// #ifdef _WIN32
// note("press " + mark("blue", "ENTER") + " key to continue...");
// cin.get();
// if (arg1) cin.get();
// cout << endl;
// #endif
//}

////press-any-key-to-cont.
//void k2c(...) {
//	#ifdef _WIN32
//	disp("press ENTER key to continue..."); cin.get();
//	#endif
//	#ifdef __linux__
//	disp("press ENTER key to continue..."); cin.get();
//	#endif
//}


//void k2c(...) {
//	disp("Press " + color("blue", "ENTER") + " key to continue...");
//	cin.get();
//}

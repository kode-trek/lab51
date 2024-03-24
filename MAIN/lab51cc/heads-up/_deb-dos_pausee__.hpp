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

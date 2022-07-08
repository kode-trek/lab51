/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 cout << can("../not-available") << endl;
 cout << "../not-available" << endl;
 cout << can("~/aپارسا") << endl;
 cout << can("./.a") << endl;
 cout << mv("../پارسی.txt", "b.txt") << endl;
}

//#include <filesystem>
//#include <string>

//namespace fs = std::filesystem;

//int main()
//{
////    fs::path path{u8"愛.txt"};
////    fs::path path{u8"پارسی.txt"};
//    fs::path path{text.txt};
//    string path_string{path.string()};
//    cout << path << endl;
//}

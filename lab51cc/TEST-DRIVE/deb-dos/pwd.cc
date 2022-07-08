/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 cout <<
 "DISPLAY-CURRENT-WORKING-DIRECTORY""\n"
 "string pwd (void)""\n"
 "=================================""\n"
 << endl;
 //var(s)
 string cwd = pwd();
 //op(s)
 cout << pwd() << endl;
 //
 cd("/"); cout << pwd() << endl;
 //
 cd(cwd); cout << pwd() << endl;
}

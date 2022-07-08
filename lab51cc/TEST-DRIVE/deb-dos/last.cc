/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 cout <<
 "TIC-TOC""\n"
 "long double last (void)""\n"
 "=======================""\n"
 << endl;
 //var(s)
 string t1 = ""; string t2 = "";
 //op(s)
 cout << "START -- TIC-TOC" << endl;
 tic(); wait(4); toc();
 cout << "STOP -- TIC-TOC" << endl;
 cout << "Elapsed-Time: " << last() << " second(s)." << endl << endl;
 //
 cout << "START -- Time-Stamp" << endl;
 t1 = ts(); wait(4); t2 = ts();
 cout << "STOP -- Time-Stamp" << endl;
 int last = str2num(t2) - str2num(t1);
 cout << "Elapsed-Time: " << last << " second(s)." << endl;
}

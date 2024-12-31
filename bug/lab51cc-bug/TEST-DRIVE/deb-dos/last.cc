/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

int main() {
 cout <<
 "TIC-TOC""\n"
 "float last (void)""\n"
 "=================""\n"
 << endl;
 // variable(s)
 string t1 = "";
 string t2 = "";
 //op(s)
 cout << "START -- TIC-TOC" << endl;
 tic();
 wait(4);
 toc();
 cout << "STOP -- TIC-TOC" << endl;
 cout << "Elapsed-Time: " << last() << " second(s)." << endl << endl; // float
 //
 cout << "START -- Time-Stamp" << endl;
 t1 = ts();
 wait(4);
 t2 = ts();
 cout << "STOP -- Time-Stamp" << endl;
 int last = str2num(t2) - str2num(t1);
 cout << "Elapsed-Time: " << last << " second(s)." << endl; // integer
}

START -- TIC-TOC
STOP -- TIC-TOC
Elapsed-Time: 4.00007 second(s).

START -- Time-Stamp
STOP -- Time-Stamp
Elapsed-Time: 0 second(s).
1712161691
1712161695
1.71216e+09
1.71216e+09

return ZERO because of the last 2 lines.

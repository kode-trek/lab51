/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
*/
int main() {
 string wd = ts(); md(wd); cd(wd);
 cout <<
 "READ [TEXT-FILE] [IN: " << wd << "]""\n"
 "auto cat (string)""\n"
 "===================================""\n"
 << endl;
 //var(s)
 auto v0 = cat();
 //op(s)
 v0 = cat();
 cout << v0.nrow << "\n--\n" << v0.txt << endl << endl;
 cout << "----" << endl;
 //
 drop("F1", "Line#1");
 v0 = cat("F1");
 cout << v0.nrow << "\n--\n" << v0.txt << endl << endl;
 cout << "----" << endl;
 //
 v0 = cat(ts());
 cout << v0.nrow << "\n--\n" << v0.txt << endl << endl;
 cout << "----" << endl;
 //
 rm("F1");
 drop("F1");
 v0 = cat("F1");
 cout << v0.nrow << "\n--\n" << v0.txt << endl << endl;
 cout << "----" << endl;
 //
 drop("F1", "Line#1""\n""Line#2");
 v0 = cat("F1");
 cout << v0.nrow << "\n--\n" << v0.txt << endl << endl;
 cout << "----" << endl;
 //
 md("D1");
 v0 = cat("D1");
 cout << v0.nrow << "\n--\n" << v0.txt << endl << endl;
 cout << "----" << endl;
 //
 drop("پارسی.txt");
 v0 = cat("پارسی.txt");
 cout << v0.nrow << "\n--\n" << v0.txt << endl << endl;
 cout << "----" << endl;
 //
 drop("پارسی.txt", "پارسی را پاس بداریم.""\n""Line#2");
 v0 = cat("پارسی.txt");
 cout << v0.nrow << "\n--\n" << v0.txt << endl << endl;
 cout << "----" << endl;
 //cleans-up
 pausee(); cd(".."); rm(wd);
}

/*
 The MIT License (MIT)
 Copyright (c) 2023 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/lab51/main/LICENSE
*/

void start() {cout << color("blue", "START---") << endl;}

void stop() {cout << color("red", "----STOP") << endl << endl;}

int main() {
 string wd = ts();
 md(wd);
 cd(wd);
 cout << color("yellow",
 "REMOVE [FILE | DIRECTORY] [IN: " + str(wd) + "]""\n"
 "bool rm (string)""\n"
 "==========================================""\n")
 << endl;
 /*  variable(s)
 [v1] file | directory
 */
 string v1 = "";
 // op(s)
 start();
 drop("F1");
 cout << rm("F1") << endl;
 stop();
 //
 start();
 cout << rm(ts()) << endl;
 stop();
 //
 start();
// cout << rm("~") << endl; // need extreme caution // parent-diretory?
 stop();
 //
 //
 start();
 md("D1/");
 drop("D1/F1");
 cout << rm("D1/") << endl;
 stop();
 // suicide! 	//eliminatin' itslef!
 start();
// cout << rm(".") << endl;
 stop();
 // cleans-up
 k2c();
 cd("..");
 rm(wd);
}

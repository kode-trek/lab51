/*
 The MIT License (MIT)
 Copyright (c) 2022 Emeer Adhamian (github.com/kode-trek)
 https://github.com/kode-trek/lab51/blob/main/LICENSE
 https://github.com/kode-trek/archive/blob/main/LICENSE
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
 cout << rm() << endl;
 stop();
 //
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
 cout << rm("~") << endl;
 stop();
 //
 start();
 v1 = "/" + ts();
 drop(v1);
 cout << rm(v1) << endl;
 stop();
 //
 start();
 md("D1/");
 drop("D1/F1");
 cout << rm("D1/") << endl;
 stop();
 // suicide!
 start();
 cout << rm(".") << endl;
 stop();
 // cleans-up
 k2c();
 cd("..");
 rm(wd);
}

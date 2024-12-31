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
 // cleans-up
 k2c();
 cd("..");
 rm(wd);
}

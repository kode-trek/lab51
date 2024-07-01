
int main() {
 string wd = ts(); md(wd); cd(wd);
 cout <<
 "MOVE [SOURCE] [TARGET] [IN: " << wd << "]""\n"
 "bool mv (string, string)""\n"
 "=======================================""\n"
 << endl;
 //var(s)
 string f1 = ""; string f2 = ""; string d1 = ""; string d2 = "";
 //op(s)
 drop("F1", "Line-F1"); drop("F2", "Line-F2");
 cout << mv("F1", "F2") << endl;
 k2c(); rm("F1"); rm("F2"); cout << endl;
 //
 md("D1/D1"); drop("D1/F1"); md("D2");
 cout << mv("D1", "D2") << endl;
 k2c(); rm("D1"); rm("D2"); cout << endl;
 //move this-very-dir into itslef!
 md("D2");
 cout << mv(".", "D2") << endl;
 k2c(); cout << endl;
 //<source> and <target> are the same!
 cout << mv(".", ".") << endl;
 //cleans-up
 k2c(); cd(".."); rm(wd);
}

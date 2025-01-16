int main() {
 cout <<
 "DISPLAY-CURRENT-WORKING-DIRECTORY""\n"
//	"PRINT-WORKING-DIRECTORY""\n"
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

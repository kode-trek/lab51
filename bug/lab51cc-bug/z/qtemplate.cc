//template <typename T>

string f1(string arg1) {return arg1;}
string f1(void) {return "";}
int f1(int arg1) {return (arg1 + 1);}

int main() {
 cout << f1(1) << endl;
 cout << f1("foo") << endl;
 cout << f1() << endl;
}


some return gibberish when cout << [...] see if we could use template something to trap them

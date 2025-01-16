int main () {
	string wd = ts(); md(wd); cd(wd);
	//var(s)
	vector<string> v1 = {"امیر علی", "علی رضا"};
	string path = "";
	drop("علی رضا"); auto v3 = cat("علی رضا"); 
	//op(s)
	enlist(v1);
	enlist(v1, "بله");
	//
	seedr(); cout << rand() << endl;
	seedr("بله"); cout << rand() << endl;
	//
	v1 = unique(v1); enlist(v1);
	//
	lower("علی رضا abc");
	//
	quote("علی رضا");
	//
	shortq("علی رضا از بازار آمد.");
	//
	split("علی رضا از بازار آمد.");
	split("علی رضا از بازار آمد.", "");
	split("علی رضا از بازار آمد.", "ا");
	split("علی رضا از بازار آمد.", "رضا");
	split("علی رضا از بازار آمد.", ".");
	//
	squote("علی رضا");
	//
	str("علی رضا");
	v1 = {"امیر علی", "علی رضا"};
	str(v1);
	//
	cout << str2num("علی رضا") << endl;
	v1 = {"امیر علی", "علی رضا"};
	enlist(str2num(v1));
	//
	type("علی رضا");
	//
	upper("علی رضا abc");
	//
	path = "علی رضا"; cout << path << endl;
	abbr("علی رضا"); cout << path << endl << endl;
	//
	path = "~/.علی رضا"; cout << path << endl;
	abbr(path); cout << path << endl << endl;
	//
	path = "/.علی رضا"; cout << path << endl;
	abbr(path); cout << path << endl << endl;
	//
	path = "./.علی رضا"; cout << path << endl;
	abbr(path); cout << path << endl << endl;
	//
	path = "./علی رضا"; cout << path << endl;
	abbr(path); cout << path << endl << endl;
	//
	path = ".//علی رضا"; cout << path << endl;
	abbr(path); cout << path << endl << endl;
	//
	path = "~علی رضا"; cout << path << endl;
	abbr(path); cout << path << endl << endl;
	//
	path = "~/[) bad namin':file @~علی رضا"; cout << path << endl;
	abbr(path); cout << path << endl;
	//
	apt("علی رضا");
	//
	cout << blankd("علی رضا") << endl;
	//
	cout << v3.txt << endl;  cout << v3.nrow << endl;
	//
	cd(string, ...);
bool cd(...);
//copy [source] [target]
bool cp(string, string, ...);
bool cp(...);
//is-directory [file | directory]
bool dir(string, ...);
bool dir(...);
//no-new-line-print [text]
void disp(string, ...);
void disp(...);

bool drop(string, string, ...);
bool drop(...);
//echo-input [on | off]
void echo(bool, ...);
void echo(void);
//exist [file | directory]
bool exist(string, ...);
bool exist(...);
//size [file | directory]
ifstream::pos_type fsize(string, ...);
ifstream::pos_type fsize(...);
//press-any-key-to-continue.
void k2c(...);
//tic-toc
long double last(...);
//make-directory [directory]
bool md(string, ...);
bool md(...);
//move [source] [target]
bool mv(string, string, ...);
bool mv(...);
//operating-system
string os(...);
//display-current-working-directory
string pwd(...);
//remove [file | directory]
bool rm(string, ...);
bool rm(...);
//system [command]
int sys(string, ...);
int sys(...);
//tree [path] [multi-level]
vector<string> tree(string, bool, ...);
vector<string> tree(...);
//time-stamp [human-readable]
string ts(bool, ...);
string ts(void);
//username
string uname(...);
//uniform-resource-identifier [path]
vector<string> uri(string, ...);
vector<string> uri(...);
//wait [second]
void wait(unsigned long long int, ...);
void wait(...);
//has-write-permission [path]
bool write_access(string, ...);
bool write_access(...);
	//cleans-up
	k2c(); cd(".."); rm(wd);
}

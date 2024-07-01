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


//echo-input [on | off]
void echo(bool, ...);
void echo(void);

//remove [file | directory]
bool rm(string, ...);
bool rm(...);

//tree [path] [multi-level]
vector<string> tree(string, bool, ...);
vector<string> tree(...);
//time-stamp [human-readable]
string ts(bool, ...);
string ts(void);

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

int main() {
	cout <<
	"SINGLE-QUOTE [TEXT]""\n"
	"void squote (string)""\n"
	"--------------------""\n"
	<< endl;
	//op(s)
	cout <<
	"ls foo bar""\n"
	"ls " << squote("foo bar")
	<< endl;
}

// looks like we need an <as-is> function
// make it this way
// substitude symbols that not fitted to DOS/WIN with their counterparts
// like : with _:_ (_ means gap/space)
// there is a file-namin' in mede that contains a few examples

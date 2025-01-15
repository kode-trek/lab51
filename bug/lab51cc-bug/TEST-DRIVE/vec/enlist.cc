int main() {
 enlist({"foo", "baz", "پدرام"});
 vector<string> v1 = {"foo", "baz", "پدرام"};
 if (v1[2] == "foo") cout << "Y" << endl;

 vector<double> v1 = {3.14, 8.9};
 enlist_({3.14, 8});

 vector<float> v1 = {3.14, 8.9, 6.28, 98, 1000, 1, -14};
 enlist(v1, false);
 enlist(v1, true);
 enlist(v1);
 // error
// vector<string> v1 = {"foo", 3.14};
// enlist(v1);
}

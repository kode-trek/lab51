string f1(string arg1, string arg2, string arg3, ...) {
 /*
 [v1] text
 [v2] pattern
 [v3] term
 */
 string v1 = arg1;
 string v2 = arg2;
 regex e (v2);
 string v3 = arg3;
 return regex_replace(v1, e, v3);
}

string f1(...) {return "";}

string f2(string arg1, string arg2, ...) {
 /*
 [v1] text
 [v2] pattern
 [v3] term
 */
 string v1 = arg1;
 string v2 = arg2;
 regex e (v2);
 return regex_replace(v1, e, "$2");
}

string f2(...) {return "";}

vector<string> re_search(string arg1, string arg2, ...) {
 /*
 [v1] term
 [v2] pattern
 */
 string v1 = arg1;
 string v2 = arg2;
 vector<string> v3 = {};
 smatch m;
 regex e (v2);
 while (regex_search(v1, m, e)) {
  v3.push_back(m[0]);
  v1 = m.suffix().str();
 }
 return v3;
}

vector<string> re_search(...) {return {};}

bool re_match (string arg1, string arg2, ...) {
 /*
 [v1] string
 [v2] reg-ex
 */
 string v1 = arg1;
 string v2 = arg2;
 regex e (v2);
 if (regex_match(v1, e)) return true;
 return false;
}

bool re_match (...) {return false;}

int main() {
// string v1 = "subject";
// string v1 = "reject";
// string v2 = "(sub)(.*)";
// cout << re_match(v1, v2) << endl;
// ...
// string v1 = "this subject has a submarine as a subsequence";
// enlist(re_search(v1, R"(\b(sub)([^ ]*))"));
// enlist(re_search(v1, R"(\b(foo)([^ ]*))"));
// ...
 string v1 = "there is a subsequence in submarine the string.";
 cout << f1(v1, R"(\b(sub)([^ ]*))", "FOO") << endl;
 cout << f2(v1, R"(\b(there)([^ ]*))") << endl;
}

#include <map>

int main() {
	map<string, int> m;
	m["foo"] = 1400;
	m["bar"] = 1000;
	m["baz"] = 1200;
	for (auto item : m) cout << "[" << item.first << "]" << item.second << endl;
}

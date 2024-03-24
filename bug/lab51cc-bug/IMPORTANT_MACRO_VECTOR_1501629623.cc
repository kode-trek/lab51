struct txt {
	string orig;
	string low;
};

bool operator<(const txt & lhs, const txt & rhs) {
	return lhs.low < rhs.low;
}

int main() {
	vector<txt> v = {
		{"1", to_lower("1")},
		{"10", to_lower("10")},
		{"2", to_lower("2")},
		{"Foo", to_lower("Foo")},
		{"bar", to_lower("bar")}
	};
	stable_sort(v.begin(), v.end());
	for (const txt & e : v) cout << e.orig << ", " << e.low << '\n';
}

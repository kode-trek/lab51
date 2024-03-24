int main() {
 cout << has("foo", "f") << endl;
 cout << has("foo", "o") << endl;
 cout << has("foo", 'f') << endl;
 cout << has("foo", 'o') << endl;
 cout << has("foobar", "ba") << endl;
 cout << has("foobar", "ba", 1) << endl;
 cout << has() << endl;
 cout << has(true) << endl;
 cout << has("foobar", "") << endl;
 cout << has("", "ba") << endl;
 cout << has("foobar", "zar") << endl;
 cout << has("foobar", 'z') << endl;
 cout << has("foobar", "پارسی") << endl;
 cout << has("پارسی", "پ") << endl;
 cout << has("پارسی", 'پ') << endl;
 cout << has("پارسی", "") << endl;
}

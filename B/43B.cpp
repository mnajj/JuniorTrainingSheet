// Hashmap
#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	unordered_map<char, int> m;
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	for (char c: s1) {
		if (c == ' ') continue;
		if (m.find(c) != m.end()) {
			++m[c];
		} else {
			m[c] = 1;
		}
	}
	for (char c: s2) {
		if (c == ' ') continue;
		if (m.find(c) == m.end()) {
			cout << "NO";
			return 0;
		}
		if (!m[c]) {
			cout << "NO";
			return 0;
		}
		--m[c];
	}
	cout << "YES";
	return 0;
}

// Sorting
#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	unordered_map<char, int> m;
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	int p2(0);
	while (s2[p2] == ' ') ++p2;
	for (char c: s1) {
		if (c == ' ') continue;
		if (s2[p2] == c) {
			++p2;
		}
	}
	if (p2 == s2.size()) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}

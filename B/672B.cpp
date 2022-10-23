#include <bits/stdc++.h>

#define fastio  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	int n;
	cin >> n;
	unordered_map<char, bool> chars;
	int count = 0;
	for (int i = 0; i < n; ++i) {
		char tmp;
		cin >> tmp;
		if (chars.find(tmp) != chars.end()) {
			++count;
		} else {
			chars[tmp] = true;
		}
		if (count > 25 || (chars.size() + count) > 26) {
			count = -1;
			break;
		}
	}
	cout << count;
	return 0;
}

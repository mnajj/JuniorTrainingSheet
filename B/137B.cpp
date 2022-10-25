#include <bits/stdc++.h>

#define fastio  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	int n;
	cin >> n;
	unordered_map<int, bool> map;
	int count = 0;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		if (map[tmp] || tmp > n) {
			++count;
		} else {
			map[tmp] = true;
		}
	}
	cout << count;
	return 0;
}

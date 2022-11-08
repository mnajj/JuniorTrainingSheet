#include <bits/stdc++.h>

#define fastio  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	int n, t, c, x;
  cin >> n >> t >> c;
	int count = 0, res = 0;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (x <= t) {
			++count;
		} else {
			count = 0;
		}
		if (count >= c) {
			++res;
		}
	}
	cout << res;
	return 0;
}

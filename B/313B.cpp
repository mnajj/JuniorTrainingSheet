#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
using namespace std;

int main() {
	fastio
	int m, l, r;
	string s;
	cin >> s;
	cin >> m;
	int tot[s.size()];
	tot[0] = 0;
	for (int i = 1; i < s.size(); ++i) {
		tot[i] = tot[i - 1];
		if (s[i] == s[i - 1]) {
			++tot[i];
		}
	}
	for (int i = 0; i < m; ++i) {
		cin >> l >> r;
		cout << tot[r - 1] - tot[l - 1] << endl;
	}
	return 0;
}

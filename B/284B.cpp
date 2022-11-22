#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
using namespace std;

int main() {
	fastio
	int n; cin >> n;
	string s; cin >> s;
	int a(0), i(0);
	for (int x = 0; x < n; ++x) {
		if (s[x] == 'A') ++a;
		else if (s[x] == 'I') ++i;
	}
	if (i == 0) cout << a;
	else if (i > 1) cout << 0;
	else cout << 1;
	return 0;
}

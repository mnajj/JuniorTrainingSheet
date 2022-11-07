#include <bits/stdc++.h>

#define fastio  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	const char colors[7] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};
	int n; cin >> n;
	for (int k = 0; k < 3; k++) {
		cout << colors[k];
	}
	for (int k = 3; k < n; k++) {
		cout << colors[3 + k % 4];
	}
	return 0;
}

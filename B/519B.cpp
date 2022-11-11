#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	int n;
	cin >> n;
	long long curr(0), prev(0);
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < n - i; ++j) {
			int x;
			cin >> x;
			curr += x;
		}
		if (i != 0) {
			cout << prev - curr << endl;
		}
		prev = curr;
		curr = 0;
	}
	return 0;
}

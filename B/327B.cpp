#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
using namespace std;

int getRandNum();

int main() {
	fastio
	int n;
	cin >> n;
	int count = 0;
	for (int i = 1; count < n; ++i) {
		cout << n + i << ' ';
		++count;
	}
	return 0;
}

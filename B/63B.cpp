#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
typedef long long int ll;

using namespace std;

int main() {
	fastio
	int n, k, x;
	cin >> n >> k;
	int arr[101] = {0};
	for (int i = 0; i < n; ++i) {
		cin >> x;
		++arr[x];
	}
	int coins = 0;
	while (arr[k] != n) {
		for (int i = k - 1; i > 0; --i) {
			if (arr[i]) {
				--arr[i];
				++arr[i + 1];
			}
		}
		++coins;
	}
	cout << coins << endl;
	return 0;
}

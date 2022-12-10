#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
using namespace std;

int main() {
	fastio
	int n;
	cin >> n;
	int a[10001];
	int b[10001];
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		b[i] = 0;
	}
	sort(a, a + n);
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (b[j] == 0 && a[i] < a[j]) {
				++sum;
				b[j] = 1;
				break;
			}
		}
	}
	cout << sum << endl;
	return 0;
}

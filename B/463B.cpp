#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int max = 0;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		if (tmp > max) {
			max = tmp;
		}
	}
	cout << max;
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int n, l, r, v, c, max = 0;
	cin >> n;
	int hs[n];
	for (int i = 0; i < n; ++i) {
		cin >> hs[i];
	}
	for (int i = 0; i < n; ++i) {
		c = 0;
		v = hs[i];
		l = i - 1;
		r = i + 1;
		++c;
		while (l >= 0) {
			if (hs[l] > v) {
				break;
			}
			if (hs[l] > hs[l + 1]) {
				break;
			}
			++c;
			--l;
		}
		while (r < n) {
			if (hs[r] > v) {
				break;
			}
			if (hs[r] > hs[r - 1]) {
				break;
			}
			++c;
			++r;
		}
		if (max < c) {
			max = c;
		}
	}
	cout << max;
	return 0;
}

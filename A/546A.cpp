#include <iostream>

using namespace std;

int main() {
	int k, w, n, res, total = 0;

	cin >> k;
	cin >> w;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		total += (i + 1) * k;
	}
	res = total - w;
	if (res > 0) {
		cout << res;
	} else {
		cout << 0;
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int moves = 0;
	bool isInList = true;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		if (tmp) {
			isInList = false;
			++moves;
		} else {
			if (!isInList) {
				++moves;
				isInList = true;
			}
		}
	}
	if (isInList && moves) {
		--moves;
	}
	cout << moves << endl;
	return 0;
}

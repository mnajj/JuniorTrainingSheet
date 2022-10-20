#include <bits/stdc++.h>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int n;
	cin >> n;
	if (n % 2 == 0 && n > 2) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}

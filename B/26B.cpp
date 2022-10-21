#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int sum = 0; int count = 0;
	for (char c: s) {
		if (c == '(') {
			++count;
		} else {
			if (count) {
				sum += 2;
				--count;
			}
		}
	}
	cout << sum << endl;
	return 0;
}

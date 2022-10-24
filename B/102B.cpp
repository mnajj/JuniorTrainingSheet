#include <bits/stdc++.h>

#define fastio  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	string s;
	cin >> s;
	int count = 0;
	while (s.size() > 1) {
		int sum = 0;
		for (int i = 0; i < s.size(); ++i) {
			sum += s[i] - '0';
		}
		s = to_string(sum);
		++count;
	}
	cout << count;
	return 0;
}

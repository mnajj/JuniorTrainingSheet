#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
	fastio
	ll n, m;
	char p;
	cin >> n >> m >> p;
	char arr[n][m];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> arr[i][j];
		}
	}
	int count(0);
	unordered_map<char, bool> exist;
	exist[p] = true;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (arr[i][j] == p) {
				if (i > 0) {
					if (arr[i - 1][j] != '.' && exist.find(arr[i - 1][j]) == exist.end()) {
						++count;
						exist[arr[i - 1][j]] = true;
					}
				}
				if (i < n - 1) {
					if (arr[i + 1][j] != '.' && exist.find(arr[i + 1][j]) == exist.end()) {
						++count;
						exist[arr[i + 1][j]] = true;
					}
				}
				if (j > 0) {
					if (arr[i][j - 1] != '.' && exist.find(arr[i][j - 1]) == exist.end()) {
						++count;
						exist[arr[i][j - 1]] = true;
					}
				}
				if (j < m - 1) {
					if (arr[i][j + 1] != '.' && exist.find(arr[i][j + 1]) == exist.end()) {
						++count;
						exist[arr[i][j + 1]] = true;
					}
				}
			}
		}
	}
	cout << count;
	return 0;
}

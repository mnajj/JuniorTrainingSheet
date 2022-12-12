/*
NOT WORKING. but it's useful for demonstrate the logic
*/


// #include <bits/stdc++.h>

// #define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
// #define ll long long int
// using namespace std;

// int main() {
// 	fastio
// 	int n, m;
// 	cin >> n >> m;
// 	int a[2][m];
// 	for (int i = 0; i < m; ++i) {
// 		a[0][i] = 0;
// 		a[1][i] = 0;
// 	}
// 	int b[n];
// 	for (int i = 0; i < n; ++i) b[i] = 0;
// 	for (int i = 0; i < m; ++i) {
// 		cin >> a[0][i];
// 		cin >> a[1][i];
// 		++b[a[0][i]];
// 		++b[a[1][i]];
// 	}
// 	int sum = 0;
// 	bool f = true;
// 	while (f) {
// 		f = false;
// 		++sum;
// 		for (int i = 0; i < n; ++i) {
// 			if (b[i] == 1) {
// 				f = true;
// 				b[i] = 0;
// 				for (int j = 0; j < m; ++j) {
// 					if (a[0][j] == i) --b[a[1][j]];
// 					if (a[1][j] == i) --b[a[0][j]];
// 				}
// 			}
// 		}
// 	}
// 	cout << sum << endl;
// 	return 0;
// }

#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
typedef long long int ll;

using namespace std;

const int SIZE = 5e5 + 5;
int arr[SIZE];

int main() {
	fastio
	int n, m, k, a, b;
	double r1, p1, p2, ans;
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	sort(arr, arr + n);
	r1 = arr[n - 1];
	cin >> m;
	for (int i = 0; i < m; ++i)cin >> arr[i];
	sort(arr, arr + m);
	p1 = arr[m - 1];
	cin >> k;
	for (int i = 0; i < k; ++i)cin >> arr[i];
	sort(arr, arr + k);
	p2 = arr[0];
	cin >> a >> b;
	ans = ((double) b * p1 * r1 * r1) / ((double) a * p2 + b * p1);
	cout << fixed << setprecision(8) << sqrt(ans);
}

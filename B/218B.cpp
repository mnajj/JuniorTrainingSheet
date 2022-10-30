#include <bits/stdc++.h>

#define fastio  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	int n, m;
	cin >> n >> m;
	int arr[m];
	int sum = 0;
	for (int i = 0; i < m; ++i) {
		cin >> arr[i];
		sum += arr[i];
	}
	int min = 0;
	int numOfPass = n;
	sort(arr, arr + m);
	for (int i = 0; i < m && numOfPass > 0; ++i) {
		int num = arr[i];
		while (numOfPass > 0 && num > 0) {
			min += num;
			--num;
			--numOfPass;
		}
	}
	if (n == sum) {
		cout << min << " " << min;
		return 0;
	}
	int max = 0;
	for (int i = 0; i < n; ++i) {
		sort(arr, arr + m, greater<int>());
		max += arr[0]--;
	}
	cout << max << " " << min;
	return 0;
}

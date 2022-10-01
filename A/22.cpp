#include <iostream>

using namespace std;

int main() {
	int n, i;

	cin >> n;
	int arr[n];

	for (i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (i = 1; i < n; ++i) {
		if (arr[i] > arr[i - 1]) {
			cout << arr[i];
			return 0;
		}
	}
	cout << "NO";
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int n;
	bool isThereEmptySeat = false;
	
	cin >> n;
	char arr[n][5];

	for (int i = 0; i < n; ++i) {
		string r;
		cin >> r;
		for (int j = 0; j < 5; ++j) {
			arr[i][j] = r[j];
		}
	}

	for (int i = 0; i < n; ++i) {
		if(arr[i][0] == 'O' && arr[i][1] == 'O') {
			arr[i][0] = arr[i][1] = '+';
			isThereEmptySeat = true;
			break;
		}
		if(arr[i][3] == 'O' && arr[i][4] == 'O') {
			arr[i][3] = arr[i][4] = '+';
			isThereEmptySeat = true;
			break;
		}
	}

	if (isThereEmptySeat) {
		cout << "YES" << endl;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < 5; ++j) {
				cout << arr[i][j];
			}
			cout << endl;
		}
	} else {
		cout << "NO" << endl;
	}
}



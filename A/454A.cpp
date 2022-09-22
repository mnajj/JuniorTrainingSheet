#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;

	int x = 1;
	int isMid = false;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		if (i == (n - 1) / 2) {
			isMid = true;
		}
		string stars = string((n - x) / 2, '*');
		string ds = string(x, 'D');
		cout << stars << ds << stars << endl;
		if (isMid) {
			x -= 2;
		} else {
			x += 2;
		}
	}
	return 0;
}

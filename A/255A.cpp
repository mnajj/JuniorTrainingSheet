#include <iostream>
using namespace std;

int main() {
	int n, itr;
	int chst = 0, bic = 0, back = 0;
	cin >> n;
	itr = 0;
	while(itr < n) {
		int i;
		cin >> i;
		if (itr % 3 == 0) chst += i;
		else if (itr % 3 == 1) bic += i;
		else back += i;
		itr++;
	}

	if (chst > bic && chst > back) cout << "chest";
	else if (bic > chst && bic > back) cout << "biceps";
	else cout << "back";
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int n, i, even(0), odd(0);

	cin >> n;
	while (n--)	{
		cin >> i;
		if(i%2==0) {
			even++;
		}else{
			odd++;
		}
	}
	cout << (odd % 2 == 1 ? odd : even) << endl;
}

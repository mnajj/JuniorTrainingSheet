#include <bits/stdc++.h>
#include <math.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
using namespace std;

int fact(int n);

int main() {
	fastio
	int c(0), d(0), e(0);
	string a, b;
	cin >> a >> b;

	for (int i = 0; i < a.size(); ++i) {
		a[i] == '+' ? c++ : c--;
		if (b[i] == '+') d++;
		else if (b[i] == '-') d--;
		else e++;
	}

	if (!e) {
		d == c ? cout << "1.000000000000" : cout << "0.000000000000";
	} else {
		int x = e + (c - d);
		if (x % 2 == 0 && x / 2 >= 0 && x / 2 <= e) {
			int ans = fact(e) / (fact(e - x / 2) * fact(x / 2));
			printf("%0.12f", double(ans) / double(pow(2, e)));
		} else {
			cout << "0.000000000000";
		}
	}
	return 0;
}

int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * fact(n - 1);
	}
}

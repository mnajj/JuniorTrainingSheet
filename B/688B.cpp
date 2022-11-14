#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int main() {
	fastio
	string n;
	cin >> n;
	cout << n;
	for (int i = n.size() - 1; i >= 0; --i) {
		cout << n[i];
	}
  // or just reverse
  // reverse(n.begin(), n.end());
  // cout << n;
	return 0;
}
 

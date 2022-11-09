#include <bits/stdc++.h>

#define fastio  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	int n;
	cin >> n;
	deque<char> deck;
	while (n) {
		char c;
		cin >> c;
		if (n % 2 != 0) {
			deck.push_back(c);
		} else {
			deck.push_front(c);
		}
		--n;
	}
	for (char i: deck) {
		cout << i;
	}
	return 0;
}

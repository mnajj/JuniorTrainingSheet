#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int h[n];
	for (int i = 0; i < n; ++i) {
		cin >> h[i];
	}
	int energy = 0, dollars = h[0];
	for (int i = 0; i < n - 1; ++i) {
		if (h[i] >= h[i + 1]) {
			energy += h[i] - h[i + 1];
		} else {
			if (energy >= (h[i + 1] - h[i])) {
				energy -= h[i + 1] - h[i];
			} else {
				dollars += (h[i + 1] - h[i]) - energy;
				energy = 0;
			}
		}
	}
	cout << dollars;
	return 0;
}

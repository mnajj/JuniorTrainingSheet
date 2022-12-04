#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long int
using namespace std;

int main() {
	fastio
	ll n, s;
	cin >> n >> s;
	vector<pair<double, ll>> vec;
	for (int i = 0; i < n; ++i) {
		ll p;
		double x, y;
		cin >> x >> y >> p;
		vec.push_back({sqrt(x * x + y * y), p});
	}
	sort(vec.begin(), vec.end());

	double r;
	for (int i = 0; i < n; ++i) {
		if (s >= 1000000) break;
		s += vec[i].second;
		r = vec[i].first;
	}
	if (s >= 1000000) printf("%.10llf\n", r);
	else cout << -1 << endl;
}

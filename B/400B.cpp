#include <iostream>
#include<set>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
typedef long long int ll;

using namespace std;

int main() {
	fastio;
	int n, m;
	cin >> n >> m;
	char a[1000][1000];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}

	set<int> idx;
	for (int i = 0; i < n; ++i) {
		int s, g;
		for (int j = 0; j < m; ++j) {
			if (a[i][j] == 'S') s = j;
			if (a[i][j] == 'G') g = j;
		}
		if (s < g) {
			cout << -1 << endl;
			return 0;
		}
		idx.insert(s - g);
	}
	cout << idx.size() << endl;
	return 0;
}

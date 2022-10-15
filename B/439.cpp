#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

int main() {
	uint64_t n, x;
	int tmp;
	cin >> n >> x;
	vector<int> vec;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		vec.push_back(tmp);
	}
	sort(vec.begin(), vec.end());
	uint64_t res = 0;
	for (int i: vec) {
		res += i * x;
		if (x > 1) {
			--x;
		}
	}
	cout << res << endl;
	return 0;
}

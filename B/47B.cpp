#include <bits/stdc++.h>

#define fastio  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
	fastio
	map<char, int> map;
	map = {
					{'A', 0},
					{'B', 0},
					{'C', 0}
	};
	for (int i = 0; i < 3; ++i) {
		string tmp;
		cin >> tmp;
		switch (tmp[1]) {
			case '>':
				map[tmp[0]] += 1;
				break;
			case '<':
				map[tmp[2]] += 1;
				break;
		}
	}
	if (map['A'] == 1 && map['B'] == 1 && map['C'] == 1) {
		cout << "Impossible";
		return 0;
	}
	char arr[3];
	for (auto &itr: map) {
		switch (itr.second) {
			case 0:
				arr[0] = itr.first;
				break;
			case 1:
				arr[1] = itr.first;
				break;
			case 2:
				arr[2] = itr.first;
				break;
		};
	}
	for (int i = 0; i < 3; ++i) {
		cout << arr[i];
	}
	return 0;
}

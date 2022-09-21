#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1;
	string s2;
  
	cin >> s1;
	cin >> s2;

	const int LEN = s1.length();

	for (int i = 0; i < LEN; ++i) {
		if (s1[i] == s2[i]) {
			cout << 0;
		} else {
			cout << 1;
		}
	}
	return 0;
}

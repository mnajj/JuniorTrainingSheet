#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s1, s2;

	bool corr = true;
	cin >> s1 >> s2;
	int len = s1.length();
	for (int i = 0; i < len; i++)
	{
		if (s1[i] == s2[len - 1 - i])
		{
			continue;
		}
		else
		{
			corr = false;
			break;
		}
	}
	string res = (corr) ? "YES" : "NO";
	cout << res;
	return 0;
}

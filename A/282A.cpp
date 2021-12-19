#include <iostream>
using namespace std;

int main(void)
{
	int n, sum {0};
	string s;

	cin >> n;
	while (n--)
	{
		cin >> s;
		if (s == "X++" || s == "++X")
		{
			sum++;
		}
		else
		{
			sum--;
		}
	}
	cout << sum;
}

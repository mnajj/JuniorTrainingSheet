	#include <iostream>
	using namespace std;

	int main(void)
	{
		int n, sum1 {0}, sum0 {0};
		char c;
	
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			cin >> c;
			if (c == '1')
			{
				sum1++;
			}
			else
			{
				sum0++;
			}
		}
		int res = (sum1 < sum0) ? sum1 : sum0;
		cout << n - (res * 2);
	}

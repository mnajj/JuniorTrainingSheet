#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	string vow = "aoyeui";
	cin >> str;
	for (auto& ch : str)
	{
		ch = tolower(ch);
		if (vow.find(ch) < vow.length())
		{
			continue;
		}
		else
		{
			cout << "." << ch;
		}
	}
}

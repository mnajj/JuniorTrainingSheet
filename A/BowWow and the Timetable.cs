using System;
using System.Numerics;
using static System.Console;

namespace ConsoleApplication
{
	class Program
	{
		static void Main(string[] args)
		{
			string str = ReadLine();
			int last1 = -1, cnt1s = 0;

			for (int i = 0; i < str.Length; i++)
			{
				if (str[i] == '1')
				{
					if (last1 == -1) last1 = i;
					cnt1s += 1;
				}
			}

			if (cnt1s == 0)
			{
				WriteLine(0);
				return;
			}

			last1 = str.Length - last1 - 1;

			if (last1 % 2 == 1)
			{
				last1 += 1;
				cnt1s = 0;
			}

			last1 = last1 / 2;

			if (cnt1s > 1)
			{
				last1 += 1;
			}
			WriteLine(last1);
		}
	}
}

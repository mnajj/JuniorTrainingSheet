using System;
using System.Collections.Generic;
using static System.Console;

namespace ConsoleApplication
{
	class Program
	{
		static void Main(string[] args)
		{
			bool ret = false;
			string numSeq = "0123456789";
			int count = 0;
			int res = 0;

			string[] token = ReadLine().Split();
			int n = int.Parse(token[0]);
			int k = int.Parse(token[1]);

			for (int i = 0; i < n; i++)
			{
				string s = ReadLine();
				for (int j = 0; j <= k; j++)
				{
					ret = s.Contains(numSeq[j]);
					if (ret)
					{
						count++;
						ret = false;
					}
				}
				if (count >= k + 1) res++;
				count = 0;
			}
			WriteLine(res);
		}
	}
}

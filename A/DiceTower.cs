using System;
using static System.Console;

namespace ConsoleApplication
{
	class Program
	{
		static void Main(string[] args)
		{
			int.TryParse(ReadLine(), out int n);
			int.TryParse(ReadLine(), out int z);

			for (int i = 0; i < n; i++)
			{
				string[] token = ReadLine().Split();
				int x = int.Parse(token[0]);
				int y = int.Parse(token[1]);

				if (x == z || x == 7 - z || y == z || y == 7 - z)
				{
					WriteLine("NO");
					return;
				}
			}
			WriteLine("YES");
			return;
		}
	}
}

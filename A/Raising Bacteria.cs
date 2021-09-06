using System;
using static System.Console;
namespace ConsoleApp
{
	class Program
	{
		static void Main(string[] args)
		{
			double.TryParse(ReadLine(), out double  n);
			int res = 0;

			while(n > 0)
			{
				if (n % 2 == 1) res++;
				n = Math.Floor( n / 2);
			}

			WriteLine(res);
		}
	}
}

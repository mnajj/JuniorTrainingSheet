using System;
using static System.Console;

namespace ConsoleApplication
{
	class Program
	{
		static void Main(string[] args)
		{
			string input = ReadLine();
			string[] sep = input.Split();

			string res = String.Empty;

			foreach (string wrd in sep)
			{
				res += $"{char.ToUpper(wrd[0]) + wrd.Substring(1)} ";
			}

			WriteLine(res);
		}
	}
}

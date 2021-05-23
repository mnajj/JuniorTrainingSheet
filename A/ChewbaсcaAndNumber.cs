using System;
using static System.Console;

namespace ConsoleApplication
{
	class Program
	{
		public static void Main(string[] args)
		{
			char[] s = ReadLine().ToCharArray();
			for (int i = 0; i < s.Length; i++)
			{
				int n = int.Parse(s[i].ToString());
				if (n > 4) s[i] = Convert.ToChar((9 - n).ToString());
			}
			if (int.Parse(s[0].ToString()) == 0) s[0] = Convert.ToChar((9).ToString());
			string res = new string(s);
			WriteLine(res);
		}
	}
}

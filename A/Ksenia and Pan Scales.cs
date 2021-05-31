using System;
using static System.Console;

namespace ConsoleApplication
{
	class Program
	{
		static void Main(string[] args)
		{
			string s = ReadLine();
			int p = s.IndexOf('|');
			string l = s.Substring(0, p);
			string r = s.Substring(p + 1);
			string t = ReadLine();

			foreach (char c in t)
			{
				if (l.Length <= r.Length) l += c;
				else r += c;
			}
			if (l.Length == r.Length) Write(l + '|' + r);
			else Write("Impossible");
		}
	}
}

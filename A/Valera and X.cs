using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using static System.Console;

namespace Prob
{
    class Program
    {
        static void Main(string[] args)
        {
            int.TryParse(ReadLine(), out int n);
            string s = string.Empty;
            HashSet<char> x = new HashSet<char>();
            HashSet<char> y = new HashSet<char>();

            for (int i = 0; i < n; i++)
            {
                s = ReadLine();
                for (int j = 0; j < n; j++)
                {
                    if (i == j || i + j == n - 1)
                    {
                        x.Add(s[j]);
                    }
                    else
                    {
                        y.Add(s[j]);
                    }
                }
            }
            if (x.Count == 1 && y.Count == 1 && x.First() != y.First())
            {
                WriteLine("YES");
            }
            else
            {
                WriteLine("NO");
            }
        }
    }
}

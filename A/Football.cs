using System;
using System.Collections.Generic;
using System.Linq;
using static System.Console;

namespace Prob
{
    class Program
    {
        static void Main(string[] args)
        {
            int.TryParse(ReadLine(), out int n);
            List<string> goals = new List<string>();

            for (int i = 0; i < n; i++)
            {
                string x = ReadLine();
                goals.Add(x);
            }

            string first = goals[0];
            string sec = String.Empty;

            for (int i = 0; i < n; i++)
            {
                if (goals[i] != first)
                {
                    sec = goals[i];
                }
            }

            int c1 = goals.Where(x => x.Equals(first))
                .Count();
            int c2 = goals.Where(x => x.Equals(sec))
                .Count();

            if (c1 > c2)
            {
                WriteLine(first);
            }
            else
            {
                WriteLine(sec);
            }
        }
    }
}

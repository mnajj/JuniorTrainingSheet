using System;
using System.Collections.Generic;
using static System.Console;

namespace Prob
{
    class Prob
    {
        static void Main(string[] args)
        {
            int.TryParse(ReadLine(), out int n);
            List<int> a = new List<int>();
            List<int> b = new List<int>();

            for (int i = 0; i < n; i++)
            {
                string[] token = ReadLine().Split();
                a.Add(int.Parse(token[0]));
                b.Add(int.Parse(token[1]));

                if (a[i] != b[i])
                {
                    WriteLine("rated");
                    return;
                }
            }

            for (int i = 1; i < n; i++)
            {
                if (a[i] > a[i - 1])
                {
                    WriteLine("unrated");
                    return;
                }
            }
            WriteLine("maybe");
        }
    }
}

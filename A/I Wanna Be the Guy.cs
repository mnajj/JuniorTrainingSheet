using System;
using System.Collections.Generic;
using System.Linq;
using static System.Console;

namespace Prob
{
    class Prob
    {
        static void Main(string[] args)
        {
            int.TryParse(ReadLine(), out int n);
            HashSet<int> levels = new HashSet<int>();

            string[] xl = ReadLine().Split(); int[] plv = Array.ConvertAll(xl, i => int.Parse(i));
            string[] yl = ReadLine().Split(); int[] ylv = Array.ConvertAll(yl, i => int.Parse(i));

            int p = plv[0];
            int y = ylv[0];

            for(int i = 1; i <= p; i++)
            {
                levels.Add(plv[i]);
            }

            for (int i = 1; i <= y; i++)
            {
                levels.Add(ylv[i]);
            }

            if (levels.Count == n)
            {
                WriteLine("I become the guy.");
            }
            else
            {
                WriteLine("Oh, my keyboard!");
            }
        }
    }
}

using System;
using static System.Console;

namespace Prob
{
    class Prob
    {
        static void Main(string[] args)
        {
            string[] token = ReadLine().Split();
            long n = long.Parse(token[0]);
            long k = long.Parse(token[1]);

            if (k <= (n + 1) / 2)
            {
                WriteLine(k * 2 - 1);
            }
            else
            {
                WriteLine((k - (n + 1) / 2) * 2);
            }
        }
    }
}

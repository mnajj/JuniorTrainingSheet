using System;
using System.Numerics;
using static System.Console;

namespace Prob
{
    class Program
    {
        static void Main(string[] args)
        {
            int.TryParse(ReadLine(), out int n);
            if (n == 0)
            {
                WriteLine(1);
                return;
            }
            int[] units = new int[] { 8, 4, 2, 6 };
            n = (n - 1) % 4;
            WriteLine(units[n]);
        }
    }
}

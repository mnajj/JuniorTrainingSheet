using System;
using static System.Console;

namespace Problem
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] token = ReadLine().Split();
            long n = long.Parse(token[0]);
            long m = long.Parse(token[1]);
            long a = long.Parse(token[2]);

            long x = n / a;
            long y = m / a;

            if (n % a != 0)
            {
                x++;
            }
            if (m % a != 0)
            {
                y++;
            }
            WriteLine(x * y);
        }
    }
}

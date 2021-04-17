using System;
using static System.Console;

namespace ConsoleApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] token = ReadLine().Split();
            long l = long.Parse(token[0]);
            long r = long.Parse(token[1]);

            if (l % 2 != 0)
            { l++; }

            if (Math.Abs(l - r) < 2)
            { WriteLine("-1"); }
            else
            { WriteLine($"{l} {l + 1} {l + 2}"); }
        }
    }
}

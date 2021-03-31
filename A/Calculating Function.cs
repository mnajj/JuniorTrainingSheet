using System;
using static System.Console;

namespace Problem
{
    class Program
    {
        static decimal Calculating(decimal n)
        {
            decimal sum = 0;
            if (n % 2 == 0)
            {
                sum = n + ((n / 2) * -1);
            }
            else
            {
                sum = (n * -1) + decimal.Truncate(n / 2);
            }
            return sum;
        }
        static void Main(string[] args)
        {
            decimal.TryParse(ReadLine(), out decimal n);
            WriteLine(Calculating(n));
        }
    }
}

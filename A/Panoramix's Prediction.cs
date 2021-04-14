using System;
using System.Collections.Generic;
using static System.Console;

namespace ConsoleApplication
{
    class Program
    {
        private static bool Check_Prime(int number)
        {
            int i;
            for (i = 2; i <= number - 1; i++)
            {
                if (number % i == 0)
                {
                    return false;
                }
            }
            if (i == number)
            {
                return true;
            }
            return false;
        }

    static void Main(string[] args)
        {
            List<int> primes = new List<int>();
            for (int i = 0; i <= 100; i++)
            {
                if (Check_Prime(i))
                {
                    primes.Add(i);
                }
                else
                {
                    continue;
                }
            }

            string[] token = ReadLine().Split();
            int n = int.Parse(token[0]);
            int m = int.Parse(token[1]);

            if (m == primes[primes.IndexOf(n) + 1])
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

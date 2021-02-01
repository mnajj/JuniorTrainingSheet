using System;
using static System.Console;


namespace Project
{
    class Problem
    {
        static void Main(string[] args)
        {
            while (true)
            {
                int n = int.Parse(ReadLine());
                if (n != 0)
                {
                    int sq = (int)Math.Sqrt(n);
                    WriteLine(sq * sq == n ? "yes\n" : "no\n");
                }
                else
                {
                    break;
                }
            }
        }
    }
}

using System;
using static System.Console;


namespace Project
{
    class Problem
    {
        static void Main(string[] args)
        {
            int n = int.Parse(ReadLine());
            string[] token = ReadLine().Split();
            int[] cits = Array.ConvertAll(token, i => int.Parse(i));
            int min;

            for (int i = 0; i < n; i++)
            {
                int max = Math.Max(Math.Abs(cits[i] - cits[0]),
                                   Math.Abs(cits[i] - cits[n - 1]));
                 if (i == 0)
                 {
                    min = Math.Abs(cits[i] - cits[i + 1]);
                 }
                 else if (i == n - 1)
                 {
                    min = Math.Abs(cits[i] - cits[i - 1]);
                 }
                else
                {
                    min =  Math.Min(Math.Abs(cits[i] - cits[i - 1]),
                                   Math.Abs(cits[i] - cits[i + 1]));
                }

                WriteLine($"{min} {max}");
            }


        }
    }
}

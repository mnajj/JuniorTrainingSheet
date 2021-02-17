using System;
using static System.Console;
using System.Collections.Generic;

namespace Prob
{
    class Program
    {
        static void Main(string[] args)
        {
            int.TryParse(ReadLine(), out int n);
            string[] strSnak = ReadLine().Split();
            int[] intSnak = new int[n + 1];
            
            for (int i = 1; i <= n; i++)
            {
                intSnak[i] = int.Parse(strSnak[i - 1]);
            }
            bool[] vis = new bool[n + 1];
            int c = n;
            
            for (int i = 1; i <= n; i++)
            {
                vis[intSnak[i]] = true;

                while (vis[c] && c > 0)
                {
                    Write(c-- + " ");
                }
                WriteLine("");
            }
        }
    }
}

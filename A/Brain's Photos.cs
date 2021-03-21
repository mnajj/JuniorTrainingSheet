using System;
using System.Collections.Generic;
using System.Linq;
using static System.Console;

namespace Prob
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] token = ReadLine().Split();
            int n = int.Parse(token[0]), m = int.Parse(token[1]);
            bool color = false;

            for (int i = 0; i <n; i++)
            {
                string[] px = ReadLine().Split();
                foreach (string p in px)
                {
                    if (p == "C" || p == "M" || p == "Y")
                    {
                        color = true;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
            if (color)
            {
                WriteLine("#Color");
            }
            else
            {
                WriteLine("#Black&White");
            }
        }
    }
}

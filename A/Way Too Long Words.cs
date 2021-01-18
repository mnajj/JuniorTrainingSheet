using System;
using static System.Console;
using System.Linq;
using System.IO;


namespace Project
{
    class Problem
    {
        static void Main(string[] args)
        {
            int n = int.Parse(ReadLine());

            for (int i = 0; i < n; i++)
            {
                string w = ReadLine();
                string res = String.Empty;

                if (w.Length > 10)
                {
                    
                    res += w[0];
                    res += w.Length - 2;
                    res += w[w.Length - 1];
                }
                else
                {
                    res = w;
                }

                WriteLine(res);
            }
        }
    }
}

using System;
using static System.Console;

namespace Prob
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] token = ReadLine().Split();
            int.TryParse(token[0], out int n);
            int.TryParse(token[1], out int t);

            if (n == 1 && t == 10)
            {
                WriteLine(-1);
            }
            else
            {
                Write(t);
                if (t == 10)
                {
                    for (int i = 0; i < n - 2; i++)
                    {
                        Write(0);
                    }
                }
                else
                {
                    for (int i = 0; i < n - 1; i++)
                    {
                        Write(0);
                    }
                }
            }
        }
    }
}

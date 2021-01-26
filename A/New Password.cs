using System;
using static System.Console;


namespace Problem
{
    class Problem
    {
        static void Main(string[] args)
        {
            string[] inputs = ReadLine().Split();
            
            int n = int.Parse(inputs[0]);
            int k = int.Parse(inputs[1]);

            string ABC = "abcdefghijklmnopqrstuvwxyz";
            string res = String.Empty;
            
            for (int i = 0; i < n; i++)
            {
                res += ABC[i % k];
            }

            WriteLine(res);
        }
    }
}

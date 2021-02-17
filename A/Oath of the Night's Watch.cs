using System;
using static System.Console;

namespace Prob
{
    class Program
    {
        static void Main(string[] args)
        {
            int.TryParse(ReadLine(), out int n);
            string[] inputs = ReadLine().Split();
            int[] stewards = Array.ConvertAll(inputs, i => int.Parse(i));
            Array.Sort(stewards);
            int min = stewards[0];
            int max = stewards[stewards.Length - 1];
            int res = 0;
            
            foreach (int i in stewards)
            {
                if (i > min && i < max)
                {
                    res += 1;
                }
            }
            WriteLine(res);
        }
    }
}

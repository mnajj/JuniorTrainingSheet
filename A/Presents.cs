using System;
using static System.Console;
using System.Linq;


namespace Project
{
    public static class Extensions
    {
        public static int findIndex<T>(this T[] array, T item)
        {
            return Array.IndexOf(array, item);
        }
    }
    class Problem
    {
        static void Main(string[] args)
        {
            int n = int.Parse(ReadLine());
            string[] strToken = ReadLine().Split();

            int[] intToken = Array.ConvertAll(strToken, i => int.Parse(i));
            int[] sequence = Enumerable.Range(1, n).ToArray();

            for (int i = 0; i < n; i++)
            {
                int res = intToken.findIndex(sequence[i]) + 1;
                Write($"{res} ");
            }
        }
    }
}

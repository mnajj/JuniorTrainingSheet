using System;
using System.Collections.Generic;
using System.Linq;
using static System.Console;

namespace ProblemSolving
{
  class Program
  {
    static void Main(string[] args)
    {
      int.TryParse(ReadLine(), out int n);
      string[] input = ReadLine().Split();
      int[] arr = Array.ConvertAll(input, i => int.Parse(i));

      double over = Math.Round(arr.Length / 2D, 0, MidpointRounding.AwayFromZero);
      Dictionary<int, int> counter = new Dictionary<int, int>();

      for (int i = 0; i < n; i++)
			{
        if (counter.ContainsKey(arr[i]))
				{
          counter[arr[i]] += 1;
				}
        else
				{
          counter[arr[i]] = 1;
				}
			}
      foreach (KeyValuePair<int, int> entry in counter)
      {
        if (counter[entry.Key] > over)
				{
          WriteLine("NO");
          return;
				}
      }
      WriteLine("YES");
    }
  }
}

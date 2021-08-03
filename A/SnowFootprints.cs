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
      char[] arr = ReadLine().ToCharArray();
      char[] unique = arr.Distinct().ToArray();

      List<char> steps = new List<char>(arr);
      int f = 0, l = 0;
      if(unique.Length == 2)
			{
        if(unique[1] == 'R')
				{
          f = steps.FindIndex(c => c == 'R') + 1;
          l = steps.FindLastIndex(c => c == 'R') + 2;
				}
        else
				{
          l = steps.FindIndex(c => c == 'L');
          f = steps.FindLastIndex(c => c == 'L') + 1;
        }
			}
      else
			{
        f = steps.FindIndex(c => c == 'R') + 1;
        l = steps.FindIndex(c => c == 'L');
      }
      WriteLine($"{f} {l}");
    }
  }
}

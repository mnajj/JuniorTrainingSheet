using System;
using static System.Console;


namespace Project
{
    class Problem
    {
        static void Main(string[] args)
        {
            string[] StrArr = ReadLine().Split("+");

            int[] IntArr = Array.ConvertAll(StrArr, i => int.Parse(i));
            Array.Sort(IntArr);
            string res = String.Empty;

            foreach(int i in IntArr)
            {
                res += i + "+";
            }
            res = res.Remove(res.Length - 1);
            WriteLine(res);
        }
    }
}

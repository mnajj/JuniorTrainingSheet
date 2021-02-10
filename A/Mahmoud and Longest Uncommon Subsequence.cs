using System;
using static System.Console;


namespace Project
{
    class Problem
    {
        static void Main(string[] args)
        {
            string str1 = ReadLine();
            string str2 = ReadLine();

            if (str1 == str2)
            {
                WriteLine("-1");
            }
            else if (str1.Length > str2.Length)
            {
                WriteLine($"{str1.Length}");
            }
            else
            {
                WriteLine($"{str2.Length}");
            }
        }
    }
}

using System;
using static System.Console;
using System.Linq;


namespace Project
{
    class Address
    {
        static void Main(string[] args)
        {
            string[] input = ReadLine().Split(", ");
            input[0] = input[0].Replace("{", "");
            input[input.Length - 1] = input[input.Length - 1].Replace("}", "");

            if (input[0] == "")
            {
                WriteLine("0");
            }
            else
            {
                int res = input.Distinct().Count();
                WriteLine($"{res}");
            }
            
        }
    }
}

using System;
using static System.Console;
using System.Numerics;


namespace Project
{
    class Problem
    {
        static void Main(string[] args)
        {
            while (true)
            {
                BigInteger i1 = BigInteger.Parse(ReadLine());
                BigInteger i2 = BigInteger.Parse(ReadLine());
                BigInteger res = i1 * i2;

                WriteLine($"{res}");
            }
        }
    }
}

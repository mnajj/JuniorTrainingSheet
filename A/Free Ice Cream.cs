using System;
using static System.Console;


namespace Project
{
    class Problem
    {
        static void Main(string[] args)
        {
            string[] inputs = ReadLine().Split();
            double n = double.Parse(inputs[0]);
            double x = double.Parse(inputs[1]);
            double c = 0;

            for (double i = 0; i < n; i++)
            {
                string[] line = ReadLine().Split();
                if (line[0] == "+")
                {
                    x += double.Parse(line[1]);
                }
                else
                {
                    double y = double.Parse(line[1]);
                    if (y <= x)
                    {
                        x -= double.Parse(line[1]);
                    }
                    else
                    {
                        c++;
                    }
                }
            }
            WriteLine($"{x} {c}");
        }
    }
}

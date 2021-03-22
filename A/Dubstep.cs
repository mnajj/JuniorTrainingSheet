using System;
using System.Text.RegularExpressions;
using static System.Console;

namespace Prob
{
    class Program
    {
        static void Main(string[] args)
        {
            string beat = ReadLine();
            beat = beat.Replace("WUB", " ");
            beat = Regex.Replace(beat, @"\s+", " ");
            WriteLine(beat.Trim());
        }
    }
}

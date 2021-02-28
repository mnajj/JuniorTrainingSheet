using System;
using System.Collections.Generic;
using System.Linq;
using static System.Console;

namespace Prob
{
    public static class StringExtensions
    {
        private static char[] _alphabet;

        static StringExtensions()
        {
            _alphabet = "abcdefghijklmnopqrstuvwxyz".ToCharArray();
        }

        public static bool ContainsAlphabet(this string input)
        {
            return !_alphabet
                .Except(new HashSet<char>(input))
                .Any();
        }

        static void Main(string[] args)
        {
            int.TryParse(ReadLine(), out int n);
            string word = ReadLine().ToLower();
            
            if (word.ContainsAlphabet())
            {
                WriteLine("YES");
            }
            else
            {
                WriteLine("NO");
            }
        }
    }
}

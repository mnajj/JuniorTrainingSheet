using System;
using System.Collections.Generic;
using System.Linq;
using static System.Console;

namespace ConsoleApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            Dictionary<string, int> hashMap = new Dictionary<string, int>()
            {
                { "Tetrahedron", 4},
                { "Cube", 6 },
                { "Octahedron", 8 },
                { "Dodecahedron", 12 },
                { "Icosahedron", 20 }
            };

            int.TryParse(ReadLine(), out int n);
            long res = 0;

            for (int i = 0; i < n; i++)
            {
                string key = ReadLine().Trim();
                res += hashMap[key];
            }

            WriteLine(res);
        }
    }
}

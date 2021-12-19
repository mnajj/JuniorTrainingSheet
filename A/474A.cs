using System;
using static System.Console;

namespace Prob
{
    class Prob
    {
        static void Main(string[] args)
        {
            string shift = ReadLine();
            string msg = ReadLine();
            char[] keys = "qwertyuiopasdfghjkl;zxcvbnm,./".ToCharArray();
            string res = String.Empty;

            for (int i = 0; i < msg.Length; i++)
            {
                if (shift == "R")
                {
                    res += keys[Array.IndexOf(keys, msg[i]) - 1];
                }
                else
                {
                    res += keys[Array.IndexOf(keys, msg[i]) + 1];
                }
            }
            WriteLine(res);
        }
    }
}

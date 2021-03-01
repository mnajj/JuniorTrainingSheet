using System;
using System.Linq;
using static System.Console;

namespace Prob
{
    class Prob
    {
        static void Main(string[] args)
        {
            int.TryParse(ReadLine(), out int n);
            string[] strCoins = ReadLine().Split();
            int[] intCoins = Array.ConvertAll(strCoins, i => int.Parse(i));
            Array.Sort(intCoins);
            Array.Reverse(intCoins);
            int sum = 0;
            int res = 0;
            int arrSum = intCoins.Sum();

            for (int i = 0; i < n; i++)
            {
                sum += intCoins[i];
                arrSum -= intCoins[i];
                res++;
                if (sum > arrSum)
                {
                    WriteLine(res);
                    break;
                }
            }
        }
    }
}

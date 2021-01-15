using System;


namespace Project
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] inputs = Console.ReadLine().Split();
            int n = int.Parse(inputs[0]);
            int t = int.Parse(inputs[1]);
            int k = int.Parse(inputs[2]);
            int d = int.Parse(inputs[3]);

            int g = (n + k - 1) / k;
            int o1 = 0;
            int o2 = d;

            for (int i = 0; i < g; i++)
            {
                if (o1 <= o2)
                {
                    o1 += t;
                }
                else
                {
                    o2 += t;
                }
            }

            if (Math.Max(o1, o2) < g * t)
            {
                Console.WriteLine("YES");
            }
            else
            {
                Console.WriteLine("NO");
            }
        }
    }
}

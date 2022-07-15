namespace SandBox;

public class Program
{
	static void Main(string[] args)
	{
		int count = 0;
		int n = int.Parse(Console.ReadLine());
		for (int i = 0; i < n; i++)
		{
			string[] input = Console.ReadLine().Split(" ");
			int p = int.Parse(input[0]);
			int q = int.Parse(input[1]);
			if (q - p >= 2)
			{
				count++;
			}
		}
		Console.WriteLine(count);
	}
}

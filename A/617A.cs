public static class Program
{
	public static void Main(string[] args)
	{
		int.TryParse(Console.ReadLine(), out int n);
		int result = n / 5;
		if (n % 5 > 0) result++;
		Console.WriteLine(result);
	}
}

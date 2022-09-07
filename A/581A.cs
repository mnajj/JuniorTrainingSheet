public static class Program
{
	public static void Main(string[] args)
	{
		var input = Console.ReadLine().Split(' ');
		var r = int.Parse(input[0]);
		var b = int.Parse(input[1]);

		var min = Math.Min(r, b);
		var max = Math.Max(r, b);
		Console.Write(min + " " + (max - min) / 2);
	}
}

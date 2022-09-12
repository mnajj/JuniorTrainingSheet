public static class Program
{
	public static void Main(string[] args)
	{
		var input = Console.ReadLine().Split(' ');
		var r = int.Parse(input[0]);
		var c = int.Parse(input[1]);
		var snake = new char[r, c];
		var isRight = true;

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if ((i + 1) % 2 == 0) snake[i, j] = '.';
				else snake[i, j] = '#';
			}
		}
		for (int i = 1; i < r; i += 2)
		{
			if (isRight)
			{
				snake[i, c - 1] = '#';
				isRight = false;
			}
			else
			{
				snake[i, 0] = '#';
				isRight = true;
			}
		}

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				Console.Write(snake[i,j]);
			}
			Console.WriteLine();
		}
	}
}

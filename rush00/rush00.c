void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		i;
	int		j;

	j = -1;
	while (j++ < y - 1)
	{
		i = -1;
		while (i++ < x - 1)
		{
			if (i == 0 || i == x - 1)
			{
				if (j == 0 || j == y - 1) ft_putchar('o');
				else ft_putchar('|');
			}
			else
			{
				if (j == 0 || j == y - 1) ft_putchar('-');
				else ft_putchar(' ');
			}
			if (i == x - 1) ft_putchar('\n');
		}
	}
}

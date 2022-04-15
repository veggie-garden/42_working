#include <stdio.h>

void	rush(int x, int y);

int		main(int argc, char **argv)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	if (argc != 3)
		return (0);
	while (*argv[1] >= '0' && *argv[1] <= '9')
	{
		x *= 10;
		x += *argv[1] - '0';
		argv[1]++;
	}
	while (*argv[2] >= '0' && *argv[2] <= '9')
	{
		y *= 10;
		y += *argv[2] - '0';
		argv[2]++;
	}
	// printf("%d %d\n", x, y);
	rush(x, y);
}

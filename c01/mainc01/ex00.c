#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int n = 10;
	int *nbr = &n;

	ft_ft(nbr);
	printf("%d\n", n);
}

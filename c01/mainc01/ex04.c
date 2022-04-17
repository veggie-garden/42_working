#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int aa = 20;
	int bb = 10;

	int *a = &aa;
	int *b = &bb;
	ft_ultimate_div_mod(a, b);
	printf("a: %d, b: %d\n", *a, *b);
}

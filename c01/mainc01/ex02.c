#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int aa = 10;
	int bb = 20;

	int *a = &aa;
	int *b = &bb;
	ft_swap(a, b);
	printf("a: %d, b: %d\n", *a, *b);
}

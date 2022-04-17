#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int n = 10;
	int *a = &n;
	int **b = &a;
	int ***c = &b;
	int ****d = &c;
	int *****e = &d;
	int ******f = &e;
	int *******g = &f;
	int ********h = &g;
	int *********nbr = &h;

	ft_ultimate_ft(nbr);
	printf("%d\n", n);
}

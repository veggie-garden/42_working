#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int arr[3] = {0, 1, 2};
	int arr1[4] = {0, 1, 2, 3};

	ft_rev_int_tab(arr, 3);
	ft_rev_int_tab(arr1, 4);
	for (int i=0; i<3; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i=0; i<4; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}

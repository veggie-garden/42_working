#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int arr1[3] = {4, 2, 3};
	int arr2[4] = {5, 2, 8, 4};

	ft_sort_int_tab(arr1, 3);
	ft_sort_int_tab(arr2, 4);
	for (int i=0; i<3; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i=0; i<4; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}

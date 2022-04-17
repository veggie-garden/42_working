#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	int n;
	char *str = "Hello World!";

	n = ft_strlen(str);
	printf("%d\n", n);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:05:10 by cheseo            #+#    #+#             */
/*   Updated: 2022/04/27 09:10:30 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}

int main(void)
{
	printf("-1: %d\n", ft_iterative_factorial(-1));
	printf("1: %d\n", ft_iterative_factorial(1));
	printf("0: %d\n", ft_iterative_factorial(0));
	printf("5: %d\n", ft_iterative_factorial(5));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:17:48 by cheseo            #+#    #+#             */
/*   Updated: 2022/04/27 09:22:52 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power)
	{
		res *= nb;
		power--;
	}
	return (res);
}

int main(void)
{
	printf("1^-1: %d\n", ft_iterative_power(1, -1));
	printf("0^0: %d\n", ft_iterative_power(0, 0));
	printf("2^0: %d\n", ft_iterative_power(2, 0));
	printf("2^4: %d\n", ft_iterative_power(2, 4));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:23:21 by cheseo            #+#    #+#             */
/*   Updated: 2022/04/27 09:27:53 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
	printf("0^0: %d\n", ft_recursive_power(0, 0));
	printf("1^0: %d\n", ft_recursive_power(1, 0));
	printf("1^-1: %d\n", ft_recursive_power(1, -1));
	printf("2^4: %d\n", ft_recursive_power(2, 4));
}

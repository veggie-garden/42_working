/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:11:00 by cheseo            #+#    #+#             */
/*   Updated: 2022/04/27 09:17:12 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	printf("-1: %d\n", ft_recursive_factorial(-1));
	printf("0: %d\n", ft_recursive_factorial(0));
	printf("1: %d\n", ft_recursive_factorial(1));
	printf("5: %d\n", ft_recursive_factorial(5));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:28:15 by cheseo            #+#    #+#             */
/*   Updated: 2022/04/27 09:34:45 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(void)
{
	printf("0: %d\n", ft_fibonacci(0));
	printf("-1: %d\n", ft_fibonacci(-1));
	printf("1: %d\n", ft_fibonacci(1));
	printf("3: %d\n", ft_fibonacci(3));
	printf("5: %d\n", ft_fibonacci(5));
	printf("6: %d\n", ft_fibonacci(6));
}

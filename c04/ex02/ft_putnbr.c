/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 01:20:41 by cheseo            #+#    #+#             */
/*   Updated: 2022/04/23 10:02:17 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(long n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_sol(long n)
{
	if (n == 0)
		return ;
	ft_sol(n / 10);
	ft_putchar(n % 10);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	else if (n == 0)
		ft_putchar(n);
	ft_sol(n);
}

int main(void)
{
	int arr[4] = {0, 1, -2147483648, 2147483647};
	for (int i= 0; i<4; i++)
	{
		ft_putnbr(arr[i]);
		write(1, "\n", 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 01:25:00 by cheseo            #+#    #+#             */
/*   Updated: 2022/04/23 10:17:04 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char c)
{
	if (c == '\t' || c == '\v' || c == '\n' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	n;
	int	flag;

	n = 0;
	flag = 1;
	while (is_space(*str) && *str)
		str++;
	while ((*str == '-' || *str == '+') && *str)
	{
		if (*str == '-')
			flag *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		n *= 10;
		n += *str - '0';
	}
	n *= flag;
	return (n);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d", ft_atoi(argv[1]));
}

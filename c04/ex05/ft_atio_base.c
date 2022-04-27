/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atio_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 08:23:46 by cheseo            #+#    #+#             */
/*   Updated: 2022/04/27 09:03:16 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == '\t' || c == '\v' || c == '\n' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	len = ft_str(base);
	if (len <= 1)
		return (1);
	while (base[i])
	{
		if (is_space(base[i]) || base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_sol(char *str, char *base)
{
	
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	flag;

	flag = 1;
	if (check_base(base))
		return (0);
	len = ft_strlen(base);
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			flag *= -1;
		str++;
	}
	while (
}

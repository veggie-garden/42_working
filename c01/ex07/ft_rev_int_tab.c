/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 11:06:49 by cheseo            #+#    #+#             */
/*   Updated: 2022/04/17 11:30:39 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = -1;
	while (i++ < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
	}
}

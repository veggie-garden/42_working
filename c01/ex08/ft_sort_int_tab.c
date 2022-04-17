/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:54:28 by cheseo            #+#    #+#             */
/*   Updated: 2022/04/18 00:11:39 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = -1;
	while (i++ < size - 1)
	{
		j = -1;
		while (j++ < size - 1)
		{
			if (tab[j] > tab[i])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
}

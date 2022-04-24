/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 01:10:08 by cheseo            #+#    #+#             */
/*   Updated: 2022/04/23 01:13:36 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*dest)
	{
		dest++;
		i++;
	}
	while (i + 1 < size && *src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	if (size < i)
		i = size;
	while (*src)
	{
		src++;
		i++;
	}
	*dest = '\0';
	return (i);
}

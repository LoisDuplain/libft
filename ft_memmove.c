/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:23:20 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/25 01:59:01 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*c1;
	const unsigned char *c2;

	i = 0;
	c1 = dst;
	c2 = src;
	if (c1 < c2)
	{
		while (i < len)
		{
			c1[i] = c2[i];
			i++;
		}
	}
	else if (c1 > c2)
	{
		while (len > 0)
		{
			c1[len - 1] = c2[len - 1];
			len--;
		}
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:27:10 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/24 16:28:40 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)src;
	c2 = (unsigned char *)dst;
	if (c1 == 0 && c2 == 0)
		return (0);
	while (i < n)
	{
		c2[i] = c1[i];
		i++;
	}
	return (dst);
}

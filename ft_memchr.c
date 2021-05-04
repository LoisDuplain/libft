/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:59:53 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/24 17:33:24 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*c1;

	i = 0;
	c1 = (unsigned char	*)s;
	while (i < n)
	{
		if (c1[i] == (unsigned char)c)
			return (void *)&c1[i];
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:39:12 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/25 01:20:59 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	long	i;
	int		src_len;
	char	*result;

	src_len = 0;
	while (s1[src_len])
		src_len++;
	if (!(result = (char *)malloc(sizeof(*s1) * (src_len + 1))))
	{
		errno = ENOMEM;
		return (0);
	}
	i = 0;
	while (i < src_len)
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = s1[i];
	return (result);
}

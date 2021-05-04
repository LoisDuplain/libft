/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:21:55 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/24 16:54:52 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	char	*result;
	size_t	i;

	result = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			result = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (result);
}

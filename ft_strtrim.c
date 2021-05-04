/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 05:04:04 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/27 02:23:48 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			is_charset(char c, const char *set)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char				*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (is_charset(s1[start], set))
		start++;
	while (is_charset(s1[end], set))
		end--;
	if (start == ft_strlen(s1))
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start + 1));
}

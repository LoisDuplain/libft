/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 01:56:08 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/25 08:49:18 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tab;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	if (!(tab = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = 0;
	return (tab);
}

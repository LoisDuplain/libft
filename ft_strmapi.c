/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 06:17:49 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/25 08:52:15 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tab;

	if (!s || !f)
		return (0);
	i = 0;
	if (!(tab = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	tab[i] = 0;
	return (tab);
}

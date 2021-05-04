/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:47:02 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/25 08:53:45 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strcpy(char *dest, char const *src)
{
	size_t i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*append;
	int		append_size;

	if (!s1 || !s2)
		return (0);
	append_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(append = malloc(append_size * sizeof(char))))
		return (0);
	ft_strcpy(append, s1);
	ft_strcpy(&append[ft_strlen(s1)], s2);
	return (append);
}

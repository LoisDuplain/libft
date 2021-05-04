/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 03:31:59 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/25 06:17:17 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int n)
{
	size_t nbr;
	size_t len;

	len = 0;
	nbr = (size_t)n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*result;
	size_t	ilen;
	size_t	nbr;

	ilen = intlen(n);
	if (!(result = malloc((ilen + 1) * sizeof(char))))
		return (0);
	nbr = (size_t)n;
	result[ilen--] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
	{
		nbr *= -1;
		result[0] = '-';
	}
	while (nbr > 0)
	{
		result[ilen--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (result);
}

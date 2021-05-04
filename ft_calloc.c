/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:09:55 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/25 08:48:47 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (!(result = malloc(count * size)))
	{
		errno = ENOMEM;
		return (0);
	}
	ft_bzero(result, count * size);
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 05:47:34 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/25 05:49:11 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list_elem;

	if (!(list_elem = malloc(sizeof(t_list))))
		return (0);
	list_elem->content = content;
	list_elem->next = 0;
	return (list_elem);
}

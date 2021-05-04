/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 06:29:19 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/25 06:34:26 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *current;
	t_list *temp;

	current = *lst;
	temp = 0;
	while (current)
	{
		if (current->next)
			temp = current->next;
		else
			temp = 0;
		del(current->content);
		free(current);
		current = temp;
	}
	*lst = 0;
}

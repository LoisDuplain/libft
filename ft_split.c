/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:57:08 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/25 08:51:38 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*str_truncator(char const *str, int start, int end)
{
	char	*result;
	int		i;

	if (!(result = malloc((end - start + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (i < end - start)
	{
		result[i] = str[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static int		count_words(char const *str, char c)
{
	int	str_len;
	int word_counter;
	int i;

	str_len = ft_strlen(str);
	word_counter = 0;
	i = 0;
	while (i < str_len)
	{
		while (i < str_len && str[i] == c)
			i++;
		if (i < str_len)
			word_counter++;
		else
			continue;
		while (i < str_len && str[i] != c)
			i++;
	}
	return (word_counter);
}

static int		complete_words(char const *str, char **result, char c)
{
	int	str_len;
	int word_counter;
	int i;
	int temp;

	str_len = ft_strlen(str);
	word_counter = 0;
	i = 0;
	while (i < str_len)
	{
		while (i < str_len && str[i] == c)
			i++;
		if (i < str_len)
		{
			temp = i;
			word_counter++;
		}
		else
			continue;
		while (i < str_len && str[i] != c)
			i++;
		result[word_counter - 1] = str_truncator(str, temp, i);
	}
	return (word_counter);
}

char			**ft_split(char const *s, char c)
{
	char	**result;
	int		str_len;
	int		word_counter;

	if (!s)
		return (0);
	str_len = ft_strlen(s);
	word_counter = count_words(s, c);
	if (!(result = malloc((word_counter + 1) * sizeof(char*))))
		return (0);
	complete_words(s, result, c);
	result[word_counter] = 0;
	return (result);
}

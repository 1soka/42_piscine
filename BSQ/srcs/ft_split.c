/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:22:38 by ********          #+#    #+#             */
/*   Updated: 2026/08/26 16:57:17 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/ft_bsq.h"

int	is_a_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *charset, char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (!is_a_charset(charset, str[i])
			&& (i == 0 || is_a_charset(charset, str[i - 1])))
			count++;
		i++;
	}
	return (count);
}

char	*get_word(char *charset, char *str, int *i)
{
	int		limit;
	int		k;
	char	*word;

	while (str[*i] != '\0' && is_a_charset(charset, str[*i]))
		(*i)++;
	limit = *i;
	while (str[*i] != '\0' && !is_a_charset(charset, str[*i]))
		(*i)++;
	word = malloc(((*i - limit) + 1) * sizeof(char));
	if (!word)
		return (NULL);
	k = 0;
	while (limit < *i)
	{
		word[k] = str[limit];
		limit++;
		k++;
	}
	word[k] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = 0;
	arr = malloc((count_word(charset, str) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_a_charset(charset, str[i]))
			i++;
		if (str[i] != '\0')
			arr[j++] = get_word(charset, str, &i);
	}
	arr[j] = NULL;
	return (arr);
}

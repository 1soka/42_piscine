/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: ******** <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2026/08/11 17:27:17 by ********	       #+#    #+#	      */
/*   Updated: 2026/08/15 18:50:40 by ********         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	word_len(int size, char **strs)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	return (count);
}

int	ft_add_sep(char *dest, char *sep, int k)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		dest[k] = sep[i];
		i++;
		k++;
	}
	return (k);
}

char	*ft_join_helper(char *dest, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			dest[k] = strs[i][j];
			k++;
			j++;
		}
		if (i < (size - 1))
		{
			k = ft_add_sep(dest, sep, k);
		}
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		sep_count;

	if (size <= 0)
		return (NULL);
	sep_count = (ft_strlen(sep) * (size - 1));
	dest = malloc(((word_len(size, strs) + sep_count) + 1) * sizeof(char));
	if (!dest)
	{
		dest = NULL;
		return (dest);
	}
	return (ft_join_helper(dest, strs, sep, size));
}

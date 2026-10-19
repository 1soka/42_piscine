/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:26:09 by ********          #+#    #+#             */
/*   Updated: 2026/08/13 17:13:48 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		arr = NULL;
		return (0);
	}
	arr = malloc((max - min) * sizeof(int));
	if (!arr)
	{
		arr = NULL;
		return (0);
	}
	while ((min + i) < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

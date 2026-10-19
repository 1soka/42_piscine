/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:26:37 by ********          #+#    #+#             */
/*   Updated: 2026/08/15 18:36:48 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = (max - min);
	*range = malloc((max - min) * sizeof(int));
	if (!(*range))
	{
		*range = NULL;
		return (0);
	}
	while (i < length)
	{
		(*range)[i] = (min + i);
		i++;
	}
	return (length);
}

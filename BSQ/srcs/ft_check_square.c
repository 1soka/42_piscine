/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:24:47 by ********          #+#    #+#             */
/*   Updated: 2026/08/26 19:54:13 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int	ft_check_square(int *point, char **arr)
{
	int		i;
	int		j;
	int		x;
	int		y;
	int		scale;

	i = point[0];
	j = point[1];
	scale = point[2];
	x = i + scale;
	y = j + scale;
	while (i < (x - 1))
	{
		j = point[1];
		while (j < (y - 1))
		{
			if (arr[i][j] == 'o')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

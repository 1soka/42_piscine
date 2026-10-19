/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brut_force.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 17:59:48 by ********          #+#    #+#             */
/*   Updated: 2026/08/26 21:14:08 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../includes/ft_bsq.h"

int	ft_biggest_square(int **point)
{
	int	i;
	int	change;
	int	max;
	int	max_index;

	i = 0;
	change = 1;
	max = 0;
	max_index = 0;
	while (change)
	{
		change = 0;
		i = 0;
		while (point[i] != NULL)
		{
			if (point[i][3] == 1 && point[i][2] > max)
			{
				max = point[i][2];
				change = 1;
				max_index = i;
			}
			i++;
		}
	}
	return (max_index);
}

int	**ft_brut_force(char **arr)
{
	int	**point_data;
	int	i;
	int	j;
	int	k;
	int	scale;

	i = 0;
	j = 0;
	k = 0;
	scale = 1;
	point_data = malloc((init_malloc(arr) + 1) * sizeof(int *));
	if (!point_data)
		return (NULL);
	while (arr[i] != NULL)
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			scale = 1;
			while (((i + scale) <= ft_strlen_arr(arr))
				&& ((j + scale) <= ft_strlen(arr[i])))
			{
				point_data[k] = malloc(4 * sizeof(int));
				point_data[k][0] = i;
				point_data[k][1] = j;
				point_data[k][2] = scale;
				point_data[k][3] = 0;
				if (ft_check_square(point_data[k], arr))
					point_data[k][3] = 1;
				scale++;
				k++;
			}
			j++;
		}
		i++;
	}
	point_data[k] = NULL;
	return (point_data);
}

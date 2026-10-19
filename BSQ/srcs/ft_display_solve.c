/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_solve.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:57:28 by ********          #+#    #+#             */
/*   Updated: 2026/08/26 16:31:45 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft_bsq.h"

void	ft_display_solve(int *point, char **arr)
{
	int	i;
	int	j;
	int	scale;
	int	x;
	int	y;

	i = 0;
	scale = point[2];
	x = point[0] + scale;
	y = point[1] + scale;
	while (arr[i] != NULL)
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			if ((i >= point[0] && j >= point[1])
				&& (i < (x - 1) && j < (y - 1)))
				write(1, "x", 1);
			else
				write(1, &arr[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

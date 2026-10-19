/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:12:28 by ********          #+#    #+#             */
/*   Updated: 2026/08/26 16:31:53 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/ft_bsq.h"

int	init_malloc(char **arr)
{
	int	i;
	int	j;
	int	k;
	int	scale;
	int	count;

	i = 0;
	j = 0;
	k = 0;
	count = 0;
	while (arr[i] != NULL)
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			scale = 1;
			while (((i + scale) < ft_strlen_arr(arr))
				&& ((j + scale) < ft_strlen(arr[i])))
				scale++;
			count += scale;
			j++;
		}
		i++;
	}
	return (count);
}

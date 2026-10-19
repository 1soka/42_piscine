/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 13:28:42 by ********          #+#    #+#             */
/*   Updated: 2026/08/26 21:10:14 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "./includes/ft_bsq.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_check_error(int argc, char *argv[])
{
	int	i;

	i = i;
	if ((argc == 1) || ((argc == 2) && (argv[1][0] == '\0')))
		return (1);
	return (0);
}

int	ft_print_error(void)
{
	ft_putstr("Error, please try again...\n");
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		**point;
	int		*point_result;
	char	**arr;

	i = 1;
	if (ft_check_error(argc, argv))
		return (ft_print_error());
	while (i < argc)
	{
		j = 0;
		arr = ft_read(argv[i]);
		if (arr == NULL)
			return (ft_print_error());
		point = ft_brut_force(arr);
		point_result = point[ft_biggest_square(point)];
		if (argc > 2 && (i >= 2 && i < argc))
			write(1, "\n", 1);
		ft_display_solve(point_result, arr);
		while (point[j] != NULL)
			free(point[j++]);
		free(point);
		i++;
	}
	return (0);
}

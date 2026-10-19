/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 21:33:43 by ********          #+#    #+#             */
/*   Updated: 2026/10/19 22:43:28 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_math.h"

int	check_sign(char c)
{
	char	*arr;
	int		i;

	arr = "+-*/%";
	i = 0;
	while (i < 5)
	{
		if (arr[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	verif_case(int b, char sign)
{
	if (b == 0 && (sign == '/' || sign == '%'))
	{
		if (sign == '/')
			write(1, "Stop : division by zero\n", 23);
		else
			write(1, "Stop : modulo by zero\n", 21);
		return (1);
	}
	return (0);
}

/*
int	main(int argc, char *argv[])
{
	char	sign;
	int		a;
	int		b;
	int		(*arr[5])(int, int);

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	sign = argv[2][0];
	b = ft_atoi(argv[3]);
	arr[0] = addition;
	arr[1] = soustraction;
	arr[2] = multiplication;
	arr[3] = division;
	arr[4] = modulo;
	if (verif_case(b, sign))
		return (0);
	if (!(check_sign(sign) == -1))
		ft_putnbr(arr[check_sign(sign)](a, b));
	else
		write(1, "0", 1);
	return (0);
}
*/

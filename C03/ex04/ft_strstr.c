/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 15:49:55 by ********          #+#    #+#             */
/*   Updated: 2026/08/09 19:17:47 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	j = 0;
	length = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		j = 0;
		while (j < length && str[i] != '\0')
		{
			if (str[i + j] == to_find[j])
				j++;
			else
				break ;
		}
		if (j == length)
			return (&str[i]);
		i++;
	}
	return ((char *)0);
}

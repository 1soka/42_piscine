/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 13:30:22 by ********          #+#    #+#             */
/*   Updated: 2026/08/26 21:14:55 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../includes/ft_bsq.h"

int	read_newline(char *file_name)
{
	char	buf[2];
	int		fd;
	int		a;
	int		bytes;

	a = 1;
	bytes = 0;
	fd = open(file_name, O_RDONLY);
	bytes = read(fd, buf, 1);
	buf[bytes] = 0;
	while (bytes && buf[0] != '\n')
	{
		bytes = read(fd, buf, 1);
		a++;
	}
	close(fd);
	return (a);
}

int	read_len(char *file_name)
{
	char	buf[2];
	int		fd;
	int		a;
	int		bytes;

	a = 0;
	bytes = 0;
	fd = open(file_name, O_RDONLY);
	bytes = read(fd, buf, 1);
	buf[bytes] = 0;
	while (bytes)
	{
		bytes = read(fd, buf, 1);
		a += 1;
	}
	close(fd);
	return (a);
}

char	**ft_read(char *file_name)
{
	int		fd;
	int		bytes;
	int		a;
	char	**splited_str;
	char	*dest;

	bytes = 0;
	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		return (NULL);
	a = read_len(file_name) - read_newline(file_name);
	dest = malloc(a + 1);
	if (!dest)
		return (NULL);
	read(fd, dest, read_newline(file_name));
	read(fd, dest, a);
	close(fd);
	dest[a] = '\0';
	splited_str = ft_split(dest, "\n");
	return (splited_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 13:29:40 by ********          #+#    #+#             */
/*   Updated: 2026/08/26 18:01:24 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

void	ft_display_solve(int *point, char **arr);
char	**ft_read(char *file_name);
char	**ft_split(char *str, char *charset);
int		ft_strlen(char *str);
int		ft_strlen_arr(char **arr);
int		ft_check_square(int *point, char **arr);
int		**ft_brut_force(char **arr);
int		init_malloc(char **arr);
int		ft_biggest_square(int **point);

#endif

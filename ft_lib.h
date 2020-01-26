/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 16:55:27 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/26 17:13:35 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_strlen(char *str);
char	ft_getchar(void);
void	ft_getstr(char *str);
char**	allocate(int x, int y);
void	is_A(char *line, int size, char **rush);
int		is_sy(char *line, int size);
void	pop_array(char *line, int size, char ***rush);
char**	det_rush(char *line, int size);
char**	is_rush(char *line, int size);
void	print_rush(char **rush, int x, int y);

#endif

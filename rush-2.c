/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 15:36:35 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/26 17:21:38 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "ft_lib.h"

#define MAX_BUFF_SIZE 500

void	print_rush(char **rush, int x, int y)
{
	int i;
	
	i = 0;
	while (i < 5)
	{
		if (rush[i] && rush[i][0])
		{
			if (i && rush[i - 1][0])
			{
				ft_putstr(" || ");
			}
			ft_putstr(rush[i]);
			ft_putchar(' ');
			ft_putchar('[');
			ft_putnbr(x);
			ft_putchar(']');
			ft_putchar(' ');
			ft_putchar('[');
			ft_putnbr(y);
			ft_putchar(']');
		}
		i++;		
	}
}

int	main()
{
	char line[MAX_BUFF_SIZE];
	int i;
	char **rush;
	int x;

	i = 0;
	ft_getstr(line);
	x = ft_strlen(line);
	rush = is_rush(line, x);
	if(rush)
	{
		while (*line)
		{
			ft_getstr(line);
			i++;
		}
		print_rush(rush, x, i);	
	}
	else
	{
		ft_putstr("aucune");
	}
	ft_putchar('\n');
	free(rush);
	return (0);
}


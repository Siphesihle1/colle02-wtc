/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:23:32 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/12 17:03:29 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	disp_edge(int j, int x, char a, char b)
{
	if (j == 0)
	{
		ft_putchar(a);
	}
	else if (j > 0 && j < x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(b);
	}
}

void	disp_bt(int j, int x)
{
	if (j == 0)
	{
		ft_putchar('B');
	}
	else if (j > 0 && j < x - 1)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}

void	disp(int i, int j, int x, int y)
{
	if (i == 0)
	{
		disp_edge(j, x, 'A', 'C');
	}
	else if (i > 0 && i < y - 1)
	{
		disp_bt(j, x);
	}
	else
	{
		disp_edge(j, x, 'C', 'A');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			disp(i, j, x, y);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

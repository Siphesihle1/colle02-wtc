/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:23:32 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/25 11:18:46 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(const char *str)
{
	int res;
	int i;

	i = 0;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return  (res);
}

void	disp(int j, int x, char a, char b)
{
	if (j == 0 || j == x - 1)
	{
		ft_putchar(a);
	}
	else
	{
		ft_putchar(b);
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
			if (i == 0 || i == y - 1)
			{
				disp(j, x, 'o', '-');
			}
			else
			{
				disp(j, x, '|', ' ');
			}
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		return 0;
	}
	int a = ft_atoi(av[1]);
	int b = ft_atoi(av[2]);
	rush(a, b);
	return (0);
}

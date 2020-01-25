/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:21:59 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/25 11:18:19 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		return 0;
	}
	int a = ft_atoi(av[1]);
	int b = ft_atoi(av[2]);
	//rush(a, b);
	printf("a = %i, b = %i", a, b);
	return (0);
}

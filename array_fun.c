/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:06:31 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/26 17:12:33 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

char**		allocate(int x, int y)
{
	char **mem;
	int i;

	mem = malloc(sizeof(*mem) * y);
	while (i < y)
	{
		mem[i] = malloc(sizeof(mem[i]) * x);
		i++;
	}
	return (mem);
}

void	is_A(char *line, int size, char **rush)
{
	if (size == 1)
	{
		rush[2] = "[rush-02]";
		rush[3] = "[rush-03]";
		rush[4] = "[rush-04]";
	}
	else
	{
		if (line[size - 1] == 'A')
		{
			rush[2] = "[rush-02]";
		}
		else if (line[size - 1] == 'C')
		{
			rush[3] = "[rush-03]";
			rush[4] = "[rush-04]";
		}
	}
}

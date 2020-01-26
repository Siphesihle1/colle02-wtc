/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_fun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:06:39 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/26 17:29:28 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		is_sym(char *line, int size)
{
	return ((line[0] == 'A' && (size == 1 || line[size - 1] == 'A'\
				   	|| line[size - 1] == 'C'))\
		   || (line[0] == 'o' && line[size - 1] == 'o') ||\
		   (line[0] == '/' && (size == 1 || line[size - 1] == '\\')));

}

void	pop_array(char *line, int size, char ***rush)
{
	if (line[0] == 'o' && line[size - 1] == 'o')
	{
		*rush[0] = "[rush-00]";
	}
	if ((size == 1 && line[0] == '/') ||\
		   	(line[0] == '/' && line[size - 1] == '\\'))
	{
		*rush[1] = "[rush-01]";
	}

	if (line[0] == 'A')
		is_A(line, size, *rush);	
	
	if(!is_sym(line, size))
		*rush = NULL;
}

char**	det_rush(char *line, int size)
{
	char **rush;
   
	rush = allocate(5, 7);
	pop_array(line, size, &rush);
	return (rush);
}

char**	is_rush(char *line, int size)
{
	int i;

	i = 1;
	while (i < size && (i + 1) < (size - 1))
	{	
		if (line[i] != line[i + 1])
			return (0);
		i++;
	}
	return (det_rush(line, size));
}

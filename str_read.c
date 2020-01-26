/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:06:15 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/26 17:22:18 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

char	ft_getchar()
{
	char c;

	read(0, &c, 1);
	if (c)
		return (c);
	return ('\0');
}

void	ft_getstr(char *str)
{
	char c;
	int i;

	i = 0;
	c = ft_getchar();
   	while (c && c != '\n')
	{
		str[i] = c;
		i++;
		c = ft_getchar();
	}	
	str[i] = '\0';
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 11:20:27 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/25 13:36:39 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	ft_getchar()
{
	char c;
	read(1, &c, 1);
	return (c);
}	

void	ft_getstr(char *str)
{
	int i;
 	char c;

	i = 0;
	c = ft_getchar();
	while (c != '\n')
	{
		str[i] = c;
		c = ft_getchar();
		i++;
		
	}
	str[i] = '\0';
}

int		main()
{
	char *line;
	
	ft_getstr(line);
	if (line[0] == line[ft_strlen(line) - 1])
	{
		//do something
		if (line[0] == 'o')
		{
			printf("Rush00");
		}
		else if (line[0] == '*')
		{
			printf("Rush01");
		}
	}
	return (0);
}



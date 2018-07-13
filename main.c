/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibenoit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 18:46:37 by pibenoit          #+#    #+#             */
/*   Updated: 2016/01/12 18:57:27 by pbenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

void	ft_readi(int fd)
{
	char *line;
	int r;

	while ((r = get_next_line(fd, &line)) > 0)
	{
		free(line);
	}
}

int main(int ac, char **av)
{
	int fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		ft_readi(fd);
	}
	else
		ft_readi(0);
	return (0);
}

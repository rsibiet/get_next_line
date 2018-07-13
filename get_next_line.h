/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 17:51:19 by rsibiet           #+#    #+#             */
/*   Updated: 2016/01/18 15:22:31 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "./libft/includes/libft.h"
# include <stdlib.h>
# include <unistd.h>
# define BUFF_SIZE 32

int		get_next_line(int const fd, char **line);

#endif

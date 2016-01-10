/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 15:52:49 by jleu              #+#    #+#             */
/*   Updated: 2016/01/10 18:05:01 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# define BUF_SIZE 1

typedef struct	s_gnl
{
	int			fd;
	char		*buf;
	size_t		posbuf;
}				t_gnl;

int				get_next_line(int const fd, char **line);

#endif

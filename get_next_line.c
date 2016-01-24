/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 15:09:19 by jleu              #+#    #+#             */
/*   Updated: 2016/01/24 11:55:40 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(int const fd, char **line)
{
	static char	buf[BUFF_SIZE + 1];
	int			posbuf;
	char		*temp;

	temp = NULL;
	*line = NULL;
	posbuf = 0;
	if (fd < 0 || !line)
		return (-1);
	while (buf[posbuf] != '\n')
	{
		if (!buf[posbuf] || buf[posbuf] == 26)
			if (!(read(fd, buf, BUFF_SIZE)))
			{
				ft_bzero(buf, BUFF_SIZE + 1);
				return (0);
			}
		posbuf = 0;
		while (buf[posbuf] != '\n' && buf[posbuf] && buf[posbuf] != 26)
			posbuf++;
		temp = *line;
		if (!(*line = ft_strnew(posbuf + ft_strlen(temp) + 1)))
			return (-1);
		ft_strcpy(*line, temp);
		ft_strncat(*line, buf, posbuf);
		if (temp)
			free(temp);
		ft_strcpy(buf, buf + posbuf);
	}
	ft_strcpy(buf, buf + posbuf + 1);
	return (1);
}

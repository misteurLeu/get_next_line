/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 15:09:19 by jleu              #+#    #+#             */
/*   Updated: 2016/01/24 15:36:10 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void		cpyclearbuf(char (*buf)[BUFF_SIZE + 1], size_t dec)
{
	char		*temp;

	temp = ft_strdup(*buf);
	ft_bzero(*buf, BUFF_SIZE + 1);
	ft_strcpy(*buf, temp + dec);
	free(temp);
}

int				get_next_line(int const fd, char **line)
{
	static char	buf[512][BUFF_SIZE + 1];
	size_t		posbuf;
	char		*temp;
	int			ret;

	if (line == NULL || fd < 0)
		return (-1);
	temp = NULL;
	*line = NULL;
	posbuf = 0;
	cpyclearbuf(&(buf[fd]), 0);
	while (*(buf[fd]) != '\n')
	{
		if (!*(buf[fd]) || *(buf[fd]) == 26)
		{
			ret = read(fd, buf[fd], BUFF_SIZE);
			if (ret <= 0)
			{
				ft_bzero(buf[fd], BUFF_SIZE + 1);
				return (ret);
			}
		}
		while (buf[fd][posbuf] != '\n' && buf[fd][posbuf] && buf[fd][posbuf] != 26)
			posbuf++;
		temp = *line;
		if (!(*line = ft_strnew(posbuf + ft_strlen(temp) + 1)))
			return (-1);
		ft_strcpy(*line, temp);
		ft_strncat(*line, buf[fd], posbuf);
		if (temp)
			free(temp);
		cpyclearbuf(&(buf[fd]), posbuf);
		posbuf = 0;
	}
	cpyclearbuf(&(buf[fd]), 1);
	return (1);
}

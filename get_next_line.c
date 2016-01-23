/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 15:09:19 by jleu              #+#    #+#             */
/*   Updated: 2016/01/10 18:04:51 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(int const fd, char **line)
{
	static char	buf[BUFF_SIZE + 1];
	static int	posbuf = 0;
	char		*temp;
	size_t		saveprecpos;

	if (fd < 0 || !line || (!(*line = ft_strnew(BUFF_SIZE))))
		return (-1);
	while (buf[posbuf] != '\n')
	{
		if (!buf[posbuf] || buf[posbuf] == 26)
		{
			if (!(read(fd, buf, BUFF_SIZE)))
				return (0);
			posbuf = 0;
		}
		saveprecpos = posbuf;
		while (buf[posbuf] != '\n' && buf[posbuf] && buf[posbuf] != 26)
			posbuf++;
		temp = ft_strdup(*line);
		free(*line);
		if (!(*line = ft_strnew(BUFF_SIZE + ft_strlen(temp) + 1)))
			return (-1);
		ft_strcpy(*line, temp);
		ft_strncat(*line, buf + saveprecpos, posbuf - saveprecpos);
		free(temp);
	}
	posbuf++;
	return (1);
}

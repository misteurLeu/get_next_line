/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 15:09:19 by jleu              #+#    #+#             */
/*   Updated: 2016/01/31 11:51:39 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		cpyclearbuf(char (*buf)[BUFF_SIZE + 1], size_t dec)
{
	char		*temp;

	temp = ft_strdup(*buf);
	ft_bzero(*buf, BUFF_SIZE + 1);
	ft_strcpy(*buf, temp + dec);
	free(temp);
	return (1);
}

static int		getendline(char *b, size_t pb)
{
	while (b[pb] != '\n' && b[pb] && b[pb] != 26)
		pb++;
	return (pb);
}

int				get_next_line(int const fd, char **line)
{
	static char	b[512][BUFF_SIZE + 1];
	size_t		pb;
	char		*tmp;
	int			ret;

	if ((line == NULL || fd < 0) || (tmp = NULL))
		return (-1);
	*line = NULL;
	while (*(b[fd]) != '\n' && !(pb = 0))
	{
		if ((!*(b[fd]) || *(b[fd]) == 26)
			&& (ret = read(fd, b[fd], BUFF_SIZE)) < 1)
		{
			ft_bzero(b[fd], BUFF_SIZE + 1);
			return ((ft_strlen(*line) != 0) ? 1 : ret);
		}
		pb = getendline(b[fd], pb);
		tmp = *line;
		*line = ft_strnew(pb + ft_strlen(tmp) + 1);
		ft_strcpy(*line, tmp);
		ft_strncat(*line, b[fd], pb);
		(tmp) ? free(tmp) : tmp;
		cpyclearbuf(&(b[fd]), pb);
	}
	return (cpyclearbuf(&(b[fd]), 1));
}

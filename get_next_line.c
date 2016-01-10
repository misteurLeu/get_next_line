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
#include <fcntl.h>

static t_gnl		*new_gnl(int const fd)
{
	t_gnl			*gnl;

	if (!(gnl = (t_gnl*)malloc(sizeof(t_gnl))))
		return (NULL);
	if (!(gnl->buf = ft_strnew(BUF_SIZE)))
	{
		free(gnl);
		return (NULL);
	}
	else
	{
		gnl->fd = fd;
		gnl->posbuf = 0;
	}
	return (gnl);
}

int					get_next_line(int const fd, char **line)
{
	static t_gnl	*gnl = NULL;
	char			*temp;
	size_t			saveprecpos;

	if (gnl == NULL && !(gnl = new_gnl(fd)))
		return (-1);
	if (gnl->buf[gnl->posbuf] == '\n')
	{
		ft_strclr(*line);
		gnl->posbuf++;
	}
	if (!gnl->buf[gnl->posbuf] || gnl->buf[gnl->posbuf] == 26)
	{
		ft_strclr(gnl->buf);
		if (!(read(gnl->fd, gnl->buf, BUF_SIZE)))
		{
			free(gnl->buf);
			free(gnl);
			return (0);
		}
		gnl->posbuf = 0;
	}
	saveprecpos = gnl->posbuf;
	while (gnl->buf[gnl->posbuf] != '\n' && gnl->buf[gnl->posbuf]
			&& gnl->buf[gnl->posbuf] != 26)
		gnl->posbuf++;
	if (!(temp = ft_strnew(gnl->posbuf - saveprecpos + ft_strlen(*line) + 1)))
		return (-1);
	ft_strcpy(temp, *line);
	free(*line);
	ft_strncat(temp, gnl->buf + saveprecpos, gnl->posbuf - saveprecpos);
	*line = temp;
	if (gnl->buf[gnl->posbuf] == '\n')
		return (1);
	return (get_next_line(fd, line));
}

int main(int arcg, char **argv)
{
	char *line;
	int fd;

	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		ft_putendl(line);
	}
	return (1);
}

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
	char		*temp2;
	size_t		saveprecpos;

	temp = NULL;
	temp2 = NULL;
	if (fd < 0 || !line)
		return (-1);
	while (buf[posbuf] != '\n')
	{
		if (!buf[posbuf] || buf[posbuf] == 26)
		{
			if (!(read(fd, buf, BUFF_SIZE)))
			{
				*line = ft_strdup(temp2);
				free(temp2);
				return (0);
			}
			posbuf = 0;
		}
		saveprecpos = posbuf;
		while (buf[posbuf] != '\n' && buf[posbuf] && buf[posbuf] != 26)
			posbuf++;
		temp = temp2;
		if (!(temp2 = ft_strnew(BUFF_SIZE + ft_strlen(temp) + 1)))
			return (-1);
		ft_strcpy(temp2, temp);
		ft_strncat(temp2, buf + saveprecpos, posbuf - saveprecpos);
		if (temp)
			free(temp);
	}
	*line = ft_strdup(temp2);
	free(temp2);
	posbuf++;
	return (1);
}

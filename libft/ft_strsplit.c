/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:05:11 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 04:46:27 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char*)s;
	j = 0;
	while (*s)
	{
		i = 0;
		str = (*s != c) ? (char*)s : str;
		while (s[i] && s[i] != c)
			i++;
		if (i != 0)
		{
			if (!(split[j] = ft_strnew(i + 1)))
				return (split);
			ft_strncpy(split[j++], str, i);
		}
		s = (*(s + i)) ? s + i + 1 : s + i;
	}
	return (split);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**split;
	char	*str;
	size_t	nbmot;

	if (!s)
		return (NULL);
	nbmot = 0;
	str = (char*)s;
	while (*s++)
		if (*(s - 1) != c && (*(s - 2) == c || nbmot == 0))
			nbmot++;
	if (!(split = (char**)malloc(sizeof(char*) * (nbmot + 1))))
		return (NULL);
	split[nbmot] = NULL;
	s = str;
	return (ft_split(split, s, c));
}

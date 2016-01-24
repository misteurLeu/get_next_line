/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:54:24 by jleu              #+#    #+#             */
/*   Updated: 2015/12/01 23:29:56 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int cpt;

	if (!s)
		return (NULL);
	cpt = 0;
	while (s[cpt])
	{
		if (c == s[cpt])
			return ((char *)&(s[cpt]));
		cpt++;
	}
	if (c == '\0')
		return ((char *)&(s[cpt]));
	return (NULL);
}

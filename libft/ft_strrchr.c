/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:00:48 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 00:02:37 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int cpt;

	if (!s)
		return (NULL);
	cpt = ft_strlen(s);
	while (cpt >= 0)
	{
		if (c == s[cpt])
			return ((char *)&(s[cpt]));
		cpt--;
	}
	return (NULL);
}

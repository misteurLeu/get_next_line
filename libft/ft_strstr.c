/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:55:33 by jleu              #+#    #+#             */
/*   Updated: 2015/12/01 17:26:47 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int cpt;

	if (s2 == NULL || s1 == NULL)
		return (NULL);
	cpt = 0;
	if (!*s2)
		return ((char*)s1);
	while (s1[cpt])
	{
		if (s1[cpt] == *s2 && ft_strnequ(&(s1[cpt]), s2, ft_strlen(s2)))
			return ((char*)&(s1[cpt]));
		cpt++;
	}
	return (NULL);
}

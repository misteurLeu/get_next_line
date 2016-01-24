/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:45:42 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 01:42:45 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t cpt;
	size_t cpt2;

	if (!s1 || n == 0)
		return (NULL);
	if (!s2 || !*s2)
		return ((char*)s1);
	if (n < ft_strlen(s2))
		return (NULL);
	cpt = 0;
	n = n - ft_strlen(s2);
	while (s1[cpt] && cpt <= n)
	{
		if (s1[cpt] == *s2)
		{
			cpt2 = 0;
			while (s1[cpt2 + cpt] == s2[cpt2] && s1[cpt2 + cpt] && s2[cpt2])
				cpt2++;
			if (!s2[cpt2])
				return ((char*)&(s1[cpt]));
		}
		cpt++;
	}
	return (NULL);
}

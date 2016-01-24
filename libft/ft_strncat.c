/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:58:48 by jleu              #+#    #+#             */
/*   Updated: 2015/12/01 23:34:21 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int cpts1;
	unsigned int cpts2;

	if (!s1 || !s2)
		return (NULL);
	cpts1 = ft_strlen(s1);
	cpts2 = 0;
	while (s2[cpts2] && cpts2 < n)
	{
		s1[cpts1] = s2[cpts2];
		cpts1++;
		cpts2++;
	}
	s1[cpts1] = '\0';
	return (s1);
}

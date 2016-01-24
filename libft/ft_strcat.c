/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:51:40 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 02:01:43 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned int cpts1;
	unsigned int cpts2;

	if (s1 && s2)
	{
		cpts1 = ft_strlen(s1);
		cpts2 = 0;
		while (s2[cpts2])
		{
			s1[cpts1] = s2[cpts2];
			cpts1++;
			cpts2++;
		}
		s1[cpts1] = '\0';
		return (s1);
	}
	return (NULL);
}

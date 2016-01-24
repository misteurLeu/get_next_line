/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:24:09 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 09:53:02 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int cpt;

	if (dst != NULL && src != NULL && n != 0)
	{
		cpt = 0;
		while (src[cpt] && cpt < n)
		{
			dst[cpt] = src[cpt];
			cpt++;
		}
		if (!src[cpt] || cpt < n)
		{
			while (cpt < n)
			{
				dst[cpt] = '\0';
				cpt++;
			}
		}
	}
	return (dst);
}

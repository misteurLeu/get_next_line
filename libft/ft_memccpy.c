/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 08:43:58 by jleu              #+#    #+#             */
/*   Updated: 2015/12/01 23:12:39 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t cpt;

	if (dst && src)
	{
		cpt = 0;
		while (cpt < n && (unsigned char)((char*)src)[cpt] != (unsigned char)c)
		{
			((char*)dst)[cpt] = ((char*)src)[cpt];
			cpt++;
		}
		if (cpt < n)
		{
			((char*)dst)[cpt] = ((char*)src)[cpt];
			cpt++;
			return (&((char*)dst)[cpt]);
		}
	}
	return (NULL);
}

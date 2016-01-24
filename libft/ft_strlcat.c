/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:53:25 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 07:28:15 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lencpy;
	size_t	lendst;
	size_t	i;

	lencpy = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (dst && src && size > 1)
	{
		i = 0;
		while (lendst + i < size - 1 && src[i])
		{
			if (src[i])
				dst[lendst + i] = src[i];
			else
				dst[lendst + i] = '\0';
			i++;
		}
		dst[size - 1] = '\0';
	}
	i = (lendst < size) ? lendst + lencpy : size + lencpy;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:22:01 by jleu              #+#    #+#             */
/*   Updated: 2015/12/01 17:06:59 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*cpy;

	if (!dst || !src)
		return (NULL);
	cpy = (void*)malloc(sizeof(void) * len);
	cpy = ft_memcpy(cpy, src, len);
	dst = ft_memcpy(dst, cpy, len);
	free(cpy);
	return (dst);
}

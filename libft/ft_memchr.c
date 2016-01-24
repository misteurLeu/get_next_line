/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:28:53 by jleu              #+#    #+#             */
/*   Updated: 2015/11/27 09:29:18 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int cpt;

	if (!s)
		return (NULL);
	cpt = 0;
	while (((unsigned char*)s)[cpt] != (unsigned char)c && cpt < n)
		cpt++;
	if (cpt < n)
		return ((void*)&(s[cpt]));
	return (NULL);
}

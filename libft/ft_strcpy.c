/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:13:17 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 09:52:46 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int cpt;

	if (!dst || !src)
		return (NULL);
	cpt = 0;
	while (src[cpt])
	{
		dst[cpt] = src[cpt];
		cpt++;
	}
	dst[cpt] = '\0';
	return (dst);
}

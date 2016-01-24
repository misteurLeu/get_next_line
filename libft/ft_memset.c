/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:11:24 by jleu              #+#    #+#             */
/*   Updated: 2015/12/01 16:53:33 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int cpt;

	if (b)
	{
		cpt = 0;
		while (len > cpt)
		{
			((char*)b)[cpt] = (char)(c % 256);
			cpt++;
		}
	}
	return (b);
}

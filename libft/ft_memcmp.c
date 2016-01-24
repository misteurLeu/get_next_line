/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:59:01 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 04:34:37 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t cpt;

	if (s1 == NULL || s2 == NULL || n == 0)
		return (0);
	cpt = 0;
	while (((unsigned char*)s1)[cpt] == ((unsigned char*)s2)[cpt]
			&& cpt < n - 1)
		cpt++;
	return (((unsigned char*)s1)[cpt] - ((unsigned char*)s2)[cpt]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:31:29 by jleu              #+#    #+#             */
/*   Updated: 2015/12/01 23:35:36 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int cpt;

	if (s1 == NULL || s2 == NULL || n == 0)
		return (0);
	cpt = 0;
	while (s1[cpt] && s2[cpt] && s1[cpt] == s2[cpt] && cpt < n - 1)
		cpt++;
	return ((unsigned char)s1[cpt] - (unsigned char)s2[cpt]);
}

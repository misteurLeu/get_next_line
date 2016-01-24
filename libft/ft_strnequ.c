/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:13:00 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 04:45:40 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int cpt;

	if (s1 && s2)
	{
		if (s2[0] == '\0' && n == 0)
			return (1);
		cpt = 0;
		while (s1[cpt] && s2[cpt] && s1[cpt] == s2[cpt] && cpt < n - 1)
			cpt++;
		return (s1[cpt] == s2[cpt]);
	}
	return (s1 == NULL && s2 == NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:01:37 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 05:09:12 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	unsigned int cpt;

	if (s1 && s2)
	{
		cpt = 0;
		while (s1[cpt] != '\0' && s2[cpt] != '\0' && s1[cpt] == s2[cpt])
			cpt++;
		return (s1[cpt] == s2[cpt]);
	}
	return (s1 == NULL && s2 == NULL);
}

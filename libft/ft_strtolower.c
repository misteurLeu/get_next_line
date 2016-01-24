/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:24:25 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 09:25:05 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtolower(char *s)
{
	size_t cpt;

	if (!s)
		return (NULL);
	cpt = 0;
	while (s[cpt])
	{
		s[cpt] = (char)ft_tolower((int)s[cpt]);
		cpt++;
	}
	return (s);
}

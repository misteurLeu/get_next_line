/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:13:51 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 10:07:27 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char *s)
{
	size_t cpt;

	if (!s)
		return (NULL);
	cpt = 0;
	while (s[cpt])
	{
		s[cpt] = (char)ft_toupper((int)s[cpt]);
		cpt++;
	}
	return (s);
}

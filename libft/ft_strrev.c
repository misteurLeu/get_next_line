/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 07:23:30 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 08:43:13 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *s)
{
	char	*srev;
	size_t	cpt;

	if (!s)
		return (NULL);
	cpt = ft_strlen(s);
	srev = ft_strnew(cpt);
	if (!srev)
		return (NULL);
	while (*s)
	{
		cpt--;
		srev[cpt] = *s;
		s++;
	}
	return (srev);
}

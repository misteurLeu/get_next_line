/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:46:19 by jleu              #+#    #+#             */
/*   Updated: 2015/12/01 17:18:18 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	unsigned int	cpt;

	if (s != NULL && (*f) != NULL)
	{
		if (!(str = ft_strdup((char*)s)))
			return (NULL);
		cpt = 0;
		while (str[cpt])
		{
			str[cpt] = (*f)(str[cpt]);
			cpt++;
		}
		return (str);
	}
	return (NULL);
}

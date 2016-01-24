/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:52:53 by jleu              #+#    #+#             */
/*   Updated: 2015/12/01 17:18:40 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	cpt;
	char			*str;

	if (s == NULL || (*f) == NULL || !(str = ft_strdup((char*)s)))
		return (NULL);
	cpt = 0;
	while (s[cpt])
	{
		str[cpt] = (*f)(s[cpt], cpt);
		cpt++;
	}
	return (str);
}

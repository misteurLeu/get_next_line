/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlonger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 08:34:07 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 08:42:13 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlonger(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (NULL);
	if (ft_strlen(s1) >= ft_strlen(s2))
		return ((char*)s1);
	else
		return ((char*)s2);
}

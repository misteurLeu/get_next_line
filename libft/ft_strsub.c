/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:52:39 by jleu              #+#    #+#             */
/*   Updated: 2015/12/01 20:44:09 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL || (str = (char*)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	ft_strncpy(str, &(s[start]), len);
	return (str);
}

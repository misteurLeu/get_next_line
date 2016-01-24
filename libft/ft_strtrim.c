/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:18:55 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 03:04:35 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	index;
	size_t			len;
	char			*str;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	index = 0;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	while ((s[index] == ' ' || s[index] == '\n'
				|| s[index] == '\t') && index < len)
		index++;
	str = ft_strsub(s, index, len - index);
	str[len] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 08:44:47 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 09:54:21 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclear(char **s)
{
	if (s && *s)
	{
		while (**s)
		{
			**s = '\0';
			(*s)++;
		}
	}
}
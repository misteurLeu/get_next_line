/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:21:00 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 07:27:55 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	int		size;
	int		isneg;
	char	c[ft_nbrlen(n) + 1];

	isneg = (n < 0);
	if (isneg)
		c[0] = '-';
	size = ft_nbrlen(n);
	c[size] = '\0';
	size--;
	while (size >= isneg)
	{
		c[size] = (isneg) ? -(n % 10) + '0' : n % 10 + '0';
		n = n / 10;
		size--;
	}
	ft_putstr(c);
}

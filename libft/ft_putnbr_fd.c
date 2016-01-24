/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 06:32:15 by jleu              #+#    #+#             */
/*   Updated: 2015/12/02 06:38:00 by jleu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
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
	ft_putstr_fd(c, fd);
}

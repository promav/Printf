/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabromer <pabromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:52:06 by pabromer          #+#    #+#             */
/*   Updated: 2024/05/03 16:35:07 by pabromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	char	b;
	long	a;
	int		i;

	i = 0;
	a = (long) n;
	if (a < 0)
	{
		write (1, "-", 1);
		a = -a;
		i++;
	}
	if (a < 10)
	{
		b = a + 48;
		i += ft_putchar(b);
	}
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabromer <pabromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:32:10 by pabromer          #+#    #+#             */
/*   Updated: 2024/05/03 17:27:39 by pabromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_convert(const char *c, va_list args, int i)
{
	int a;
	a = 0;
	if (c[i + 1] == 'c')
		a = ft_putchar(va_arg(args, int));
	if (c[i + 1] == 's')
		a = ft_putstr(va_arg(args, char *));
	/*if (c == 'p')
		a = ft_puthexa(va_arg(args, unsigned long));*/
	if (c[i + 1] == 'd' || c[i + 1] == 'i')
		a = ft_putnbr(va_arg(args, int));
	if (c[i + 1] == 'u')
		a = ft_putnbr(va_arg(args, unsigned int));
	/*if (c == 'x')
		a = ft_puthexa(va_arg(args, unsigned long));
	if (c == 'X')
		a = ft_puthexa(va_arg(args, unsigned long));*/
	if (c[i + 1] == '%')
		a = ft_putchar('%');
	return (a);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabromer <pabromer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:32:20 by pabromer          #+#    #+#             */
/*   Updated: 2024/05/03 17:26:32 by pabromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(char const *str, ...)
{
	va_list elements;
	int		count;
	int		i;

	va_start (elements, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count = count + ft_convert(str, elements, i);
				i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;	
	}
	va_end (elements);
	return (count);
}
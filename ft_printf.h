/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabromer <pabromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:32:23 by pabromer          #+#    #+#             */
/*   Updated: 2024/05/09 10:51:37 by pabromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_putvoid(uintptr_t n);
int	ft_putstr(char *s);
int	ft_convert(const char *c, va_list args, int i);
int	ft_puthexa(unsigned long long n, char c);
int	ft_printf(const char *str, ...);

#endif

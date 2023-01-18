/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:07:09 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/18 18:29:25 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include "../include/printf.h"

int	ft_printf(const char *input, ...)
{
	int	count;
	int	i;
	int err_check;
	va_list args;
	va_start(args, input);
	
	count = 0;
	i = 0;
	if (!input)
		return (0);
	while (input[i])
	{
//		err_check = count;
		if (input[i] == '%')
		{
			i++;
			count += ft_parse(input[i], args);
			i++;
//			if(err_check == count)
//				return (0);
		}
		else
		{
			count += ft_putchar(input[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}

int	ft_parse(const	char c, va_list args)
{
	int	count_chars;

	count_chars = 0;
	if (c == 'c')
		count_chars += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count_chars += ft_putstr(va_arg(args, const char *));
//	else if (c == 'p')
//		count_chars += ft_conv_p(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		count_chars = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count_chars = ft_putnbrb(va_arg(args, unsigned int));
/*	else if (c == 'x')
		count_chars = ft_conv_s(va_arg(args, int));
	else if (c == 'X')
		count_chars = ft_conv_s(va_arg(args, int));
*/	else if (c == '%')
		count_chars += ft_putchar('%');
	return (count_chars);
}

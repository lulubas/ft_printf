/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:07:09 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/16 19:32:00 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <ft_printf.h>

int	ft_parse(const char c);
int	ft_printf(const char *input, ...);
{
	int	count;
	int	i;
	va_list args_list;
	va_start (args_list, input);
	
	i = 0;
	if (!input)
		return (0);
	while (input[i])
	{
		if (input[i] == "%")
		{
			i++;
			count = ft_parse(input[i], args_list);
			i++;
		}
		else
		{
			count += ft_putchar(input[i]);
			i++;
		}
	}
	va_end(args_list);
	return (count);
}

int	ft_parse (const	char c, args_list)
{
	int	count_chars;

	if (c == "c")
		count_chars = ft_conv_c(va_arg(args_list, char));
	else if (c == "s")
		count_chars = ft_conv_s(va_arg(args_list, char *));
	else if (c == "p")
		count_chars = ft_conv_s(va_arg(args_list, void *));
	else if (c == "d")
		count_chars = ft_conv_s(va_arg(args_list, signed));
	else if (c == "i")
		count_chars = ft_conv_s(va_arg(args_list, int));
	else if (c == "u")
		count_chars = ft_conv_s(va_arg(args_list, unsigned));
	else if (c == "x")
		count_chars = ft_conv_s(va_arg(args_list, int));
	else if (c == "X")
		count_chars = ft_conv_s(va_arg(args_list, int));
	else if (c == "%")
	{
		ft_putchar("%");
		count_chars = 1
	}
	return (count_chars);
}


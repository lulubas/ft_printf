/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:59:05 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/20 18:34:37 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/printf.h"

int	ft_puthex(unsigned long num, char c)
{
	char		*str;
	int			count;
	int			i;

	i = ft_counthex(num);
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (0);
	str[i] = 0;
	while (i > 0)
	{
		i--;
		str[i] = ft_modulohex(num);
		num /= 16;
	}
	str = ft_iterate(str, c);
	count = ft_putstr(str);
	return (count);
}

int	ft_counthex(long num)
{
	int	count;

	count = 0;
	while (num > 0)
	{
		num /= 16;
		count ++;
	}
	return (count);
}

int	ft_modulohex(long n)
{
	int	mod;

	mod = n % 16;
	if (mod > 9)
		mod += 87;
	else
		mod += 48;
	return (mod);
}

char	*ft_iterate(char *str, char c)
{
	int	i;

	i = 0;
	if (c == 'X')
	{
		while (str[i])
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
	}
	else if (c == 'p')
		str = ft_strjoin("0x", str);
	return (str);
}

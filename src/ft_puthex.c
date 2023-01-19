/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:59:05 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/19 18:09:40 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/printf.h"

int	ft_puthex(unsigned long num, char c)
{
	char *str;
	char *new;
	long int n;
	int	count;
	int	convert;
	int i;

	i = ft_counthex(num);
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (0);
	str[i] = 0;
	i--;
	while(num > 0)
	{
		str[i] = ft_modulohex(num);
		num /= 16;
		i--;
	}
	if(c == 'X')
	{
		while (str[i])
		{
			ft_toupper(str[i]);
			i++;
		}
	}
	else if (c == 'p')
		str = ft_strjoin("0x", str);
	count = ft_putstr(str);
	return (count);
}

int	ft_counthex(long num)
{
	int	count;

	count = 0;
	while(num > 0)
	{
		num /= 16;
		count ++;
	}
	return (count);
}

int ft_modulohex(long n)
{
	int	mod;
	
	mod = n % 16;
	if (mod > 9)
		mod += 87;
	else
		mod += 48;
	return (mod);
}


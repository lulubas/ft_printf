/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:20:06 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/20 15:06:12 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/printf.h"
#include<string.h>

int	ft_putunbr(unsigned int num)
{
	char	*str;
	int		count;

	str = ft_uitoa(num);
	count = ft_putstr(str);
	return (count);
}

int	ft_ucount(long unsigned int n)
{
	int	c;

	c = 0;
	while (n)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_uitoa(unsigned int m)
{
	char				*str;
	long unsigned int	n;
	int					i;
	int					j;

	j = 0;
	n = m;
	i = ft_ucount(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = 0;
	while (i - j > 0)
	{
		str[i - 1] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (str);
}

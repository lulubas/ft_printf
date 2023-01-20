/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:20:06 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/20 14:59:49 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/printf.h"
#include<string.h>

int	ft_putnbr(int num)
{
	char	*str;
	int		count;

	str = ft_itoa(num);
	count = ft_putstr(str);
	return (count);
}

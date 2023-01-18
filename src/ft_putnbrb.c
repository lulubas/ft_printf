/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:20:06 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/18 18:32:38 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/printf.h"
#include<string.h>

int	ft_putnbrb(unsigned int num)
{
	char	*str;
	int	count;
	
	write(1, &num, sizeof(num));
	str = ft_itoa(num);
	count = ft_putstr(str);
	return (count);
}

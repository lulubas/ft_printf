/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:07:13 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/18 17:49:38 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/printf.h"

int	ft_putstr(const char *str)
{
	int	count;
	int	i;
	
	count = 0;
	i = 0;
	while(str[i])
	{
		count += ft_putchar(str[i]);
		i++;
	}
	return(count);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:07:13 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/17 17:19:41 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/printf.h"

int	ft_conv_s(const char *str)
{
	int	count;
	int	i;
	
	count = 0;
	i = 0;
	while(str[i])
	{
		count += ft_printchar(str[i]);
		i++;
	}
	return(count);
}

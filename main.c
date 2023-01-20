/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:43:17 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/20 15:03:37 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "include/printf.h"

int	main(void)
{
	char	t = '-';
	char	str[10] = "string";
	int b = -4242;
	int c = -545;
	int d = -1123;
	int e = 14460;
	void *ptr = &t;
	int	n;
	int m;

	n = ft_printf("\n char: %c\n string: %s\n decimal: %d\n hextoint : %i\n unsigned dec: %u\n hex low: %x\n hex high: %X\n hex addr: %p\n percent: %%\n", t, str, b, c, d, e, e, ptr);
	ft_printf("count is %d\n", n);
	m = printf("\n char: %c\n string: %s\n decimal: %d\n hextoint : %i\n unsigned dec: %u\n hex low: %x\n hex high: %X\n hex addr: %p\n percent: %%\n", t, str, b, c, d, e, e, ptr);
	printf("count is %d\n\n", m);
	return (0);
}

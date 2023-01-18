/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:08:22 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/18 18:29:45 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<stdarg.h>
#include<stdio.h>

int	ft_parse(const char c, va_list args);
int	ft_printf(const char *input, ...);
int	ft_putstr(const	char *str);
int ft_conv_p(void *ptr);
int	ft_putnbr(int num);
int	ft_putnbrb(unsigned int num);
int ft_putchar(char c);
char *ft_itoa(int m);

#endif

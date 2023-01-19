/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:08:22 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/19 18:24:09 by lbastien         ###   ########.fr       */
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
int	ft_putnbr(int num);
int	ft_putunbr(unsigned int num);
int ft_putchar(char c);
char *ft_itoa(int m);
char *ft_uitoa(unsigned int m);
int	ft_ucount(long unsigned int n);
int	ft_puthex(unsigned long num, char c);
int	ft_counthex(long num);
int ft_modulohex(long n);
int	ft_toupper(int c);
char *ft_strjoin(char const *s1, char const *s2);

#endif

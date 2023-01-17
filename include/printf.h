/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:08:22 by lbastien          #+#    #+#             */
/*   Updated: 2023/01/17 18:51:06 by lbastien         ###   ########.fr       */
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
int	ft_conv_s(const	char *str);
int ft_conv_p(void *ptr);
int ft_printchar(char c);

#endif

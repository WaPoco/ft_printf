/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:36:47 by vpogorel          #+#    #+#             */
/*   Updated: 2024/11/30 16:37:15 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft.h"

int	    ft_printf(const char *format, ...);
void	check_flag(va_list args, char flag);
void	ft_print_char(va_list args);
void	ft_print_decimal(va_list args);
void	ft_print_number_Hex(va_list args, char c);
void    ft_print_percent();
void    ft_print_pointer(va_list args);
void	ft_print_string(va_list args);
void	Print_udecimal(va_list args);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:36:47 by vpogorel          #+#    #+#             */
/*   Updated: 2024/12/02 16:53:37 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
void	ft_check_flag(va_list args, char flag);
void	ft_print_char(va_list args);
void	ft_print_decimal(va_list args);
void	ft_print_number_Hex(va_list args, char c);
void	ft_print_percent(va_list args);
void	ft_print_pointer(va_list args);
void	ft_print_string(va_list args);
void	ft_print_udecimal(va_list args);

#endif
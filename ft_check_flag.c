/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:36:51 by vpogorel          #+#    #+#             */
/*   Updated: 2024/12/02 16:49:16 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_check_flag(va_list args, char flag)
{
	if (flag == 'c')
		ft_print_char(args);
	else if (flag == 's')
		ft_print_string(args);
	else if (flag == 'p')
		ft_print_pointer(args);
	else if (flag == 'd' || flag == 'i')
		ft_print_decimal(args);
	else if (flag == 'u')
		ft_print_udecimal(args);
	else if (flag == 'x')
		ft_print_number_Hex(args, 'l');
	else if (flag == 'X')
		ft_print_number_Hex(args, 'u');
	else if (flag == '%')
		ft_print_percent(args);
}

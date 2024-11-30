/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:57:43 by vpogorel          #+#    #+#             */
/*   Updated: 2024/11/30 15:23:06 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_print_char(va_list args)
{
	char	result;

	result = va_arg(args, char);
	ft_putchar_fd(result, 1);
}
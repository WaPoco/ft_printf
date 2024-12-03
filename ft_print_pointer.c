/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:03:01 by vpogorel          #+#    #+#             */
/*   Updated: 2024/12/03 21:08:24 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pointer(va_list args, int *count)
{
    long long n;

    n = va_arg(args, long long);
    if (n == 0)
    {
        write(1, "(nil)", 5);
        (*count) += 5;
        return ;
    }
    write(1, "0x", 2);
    (*count) += 2;
    ft_print_number_Hex(args, 'l', count);
}
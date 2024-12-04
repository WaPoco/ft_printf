/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:03:01 by vpogorel          #+#    #+#             */
/*   Updated: 2024/12/04 19:41:51 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char get_Hex_digit(int digit)
{
	char *digit_Hex;

    digit_Hex = "0123456789abcdef";
	return (digit_Hex[digit]);
}

static void	print_Hex(int fd, unsigned long n, int *count)
{
	char	digit;

	if (n == 0)
		return ;
	print_Hex(fd, n / 16, count);
	digit = get_Hex_digit(n % 16);
	write(fd, &digit, 1);
	(*count)++;
}

static void	ft_print_pointer_Hex(unsigned long n, int *count)
{
	print_Hex(1, n, count);
	if (n == 0)
	{
		write(1, "0", 1);
		(*count)++;
	}
}

void	ft_print_pointer(va_list args, int *count)
{
    void *p;
    unsigned long number_pointer;    

    p = va_arg(args, void *);
    number_pointer = (unsigned long)p;
    if (number_pointer == 0)
    {
        write(1, "(nil)", 5);
        (*count) += 5;
        return ;
    }
    write(1, "0x", 2);
    (*count) += 2;
    ft_print_pointer_Hex(number_pointer, count);
}
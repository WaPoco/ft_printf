/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_Hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:02:55 by vpogorel          #+#    #+#             */
/*   Updated: 2024/11/30 15:23:06 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static char get_Hex_digit(int digit, char c)
{
	char *digit_Hex;

	if (c == 'u')
		digit_Hex = "0123456789ABCDEF";
	else
		digit_Hex = "0123456789abcdef";
	return (digit_Hex[digit]);
}

static void	print_Hex(int fd, long n, int sign, char c)
{
	char	digit;

	if (n == 0)
	{
		if (sign == -1)
			write(fd, "-", 1);
		return ;
	}
	print_Hex(fd, n / 16, sign, c);
	digit = get_Hex_digit(n % 16, c);
	write(fd, &digit, 1);
}

void	ft_print_number_Hex(va_list args, char c)
{
    int n;

    n = va_arg(args, int);
	if (n < 0)
		print_Hex(1, -(long)n, -1, c);
	else if (n == 0)
		write(1, "0", 1);
	else
		print_Hex(1, (long)n, 1, c);
}
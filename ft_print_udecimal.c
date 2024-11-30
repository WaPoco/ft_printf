/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:00:59 by vpogorel          #+#    #+#             */
/*   Updated: 2024/11/30 15:23:04 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static void	print_digit(int fd, long n, int sign)
{
	char	digit;

	if (n == 0)
	{
		if (sign == -1)
			write(fd, "-", 1);
		return ;
	}
	print_digit(fd, n / 10, sign);
	digit = (n % 10) + '0';
	write(fd, &digit, 1);
	return ;
}
void	Print_udecimal(va_list args)
{
    unsigned int n;

    n = va_arg(args, unsigned int);
	if (n > 0)
		print_digit(1, (long)n, 1);
	else if (n == 0)
		write(1, "0", 1);
}
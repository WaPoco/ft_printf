/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:00:59 by vpogorel          #+#    #+#             */
/*   Updated: 2024/12/03 20:34:51 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_digit(int fd, long n, int sign, int *count)
{
	char	digit;

	if (n == 0)
	{
		if (sign == -1)
		{
			write(fd, "-", 1);
			(*count)++;
		}
		return ;
	}
	print_digit(fd, n / 10, sign, count);
	digit = (n % 10) + '0';
	write(fd, &digit, 1);
	(*count)++;
	return ;
}
void	ft_print_udecimal(va_list args, int *count)
{
    unsigned int n;

    n = va_arg(args, unsigned int);
	if (n > 0)
		print_digit(1, (long)n, 1, count);
	else if (n == 0)
	{
		write(1, "0", 1);
		(*count)++;
	}
}
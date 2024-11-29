/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:36:51 by vpogorel          #+#    #+#             */
/*   Updated: 2024/11/29 18:44:18 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	Char(va_list args)
{
	char	result;

	result = va_arg(args, char);
	ft_putchar_fd(result, 1);
}
void	String(va_list args)
{
	char	*result;

	result = va_arg(args, char *);
	ft_putstr_fd(result, 1);
}
void	Decimal(va_list args)
{
	int	result;

	result = va_arg(args, int);
	ft_putnbr_fd(result, 1);
}
void	UDecimal(va_list args)
{
	
}
void	flag(va_list args)
{
	int	len_arg;

	if (flag == 'c')
		Char(args);
	else if (flag == 's')
		String(args);
	else if (flag == 'p')
		Pointer(args);
	else if (flag == 'd' || flag == 'i')
		Decimal(args);
	else if (flag == 'u')
		UDecimal(args);
	else if (flag == 'x')
		NTohexl(args);
	else if (flag == 'X')
		NTohexu(args);
	else if (flag == '%')
		PPs(args);
}

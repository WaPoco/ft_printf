/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:40:29 by vpogorel          #+#    #+#             */
/*   Updated: 2024/12/02 16:52:57 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	size_t	len_format;
	va_list	args;
	int	i;

	i = 0;
	len_format = ft_strlen(format);
	va_start(args, format);
	while (i < len_format)
	{
		if (format[i] == "%" && i + 1 < len_format)
			check_flag(args, format[i + 1]);
			i++;
		if (i + 1 < len_format)
			i++;
	}
	va_end(args);
	return (1);
}
/*
int	main()
{
	ft_printf("Hallo, my name is %s and I am %d years old.", "Vasili", 30);
}*/
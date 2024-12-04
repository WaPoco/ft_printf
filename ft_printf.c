/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:40:29 by vpogorel          #+#    #+#             */
/*   Updated: 2024/12/04 20:05:02 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int	len_format;
	va_list	args;
	int	i;
	int	count;
	
	count = 0;
	i = 0;
	len_format = ft_strlen(format);
	va_start(args, format);
	while (i < len_format)
	{
		if (format[i] != '%')
		{
			count++;write(1, &format[i], 1);
		}
		if (format[i] == '%' && i + 1 < len_format)
		{
			ft_check_flag(args, format[i + 1], &count);
			i++;
		}
		if (i + 1 <= len_format)
			i++;
	}
	va_end(args);
	return (count);
}


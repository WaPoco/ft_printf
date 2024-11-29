/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpogorel <vpogorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:36:47 by vpogorel          #+#    #+#             */
/*   Updated: 2024/11/29 18:44:24 by vpogorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft.h"

int	ft_printf(const char *format, ...);
void	flag(char flag,  va_list args);

#endif
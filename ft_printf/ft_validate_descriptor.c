/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_descriptor.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 07:01:47 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/27 07:08:46 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int 	ft_validate_descriptor(const char *format)
{
	int i;

	i = 1;
	while (ft_strchr(FLAGS, format[i]) && format[i])
		i++;
	if (ft_strchr(CONVERSIONS, format[i]) && format[i])
		return (1);
	else if ((format[i] == '%') && format[i])
		return (1);
	else if (ft_isalpha(format[i]) && format[i])
		return (1);
	return (0);
}
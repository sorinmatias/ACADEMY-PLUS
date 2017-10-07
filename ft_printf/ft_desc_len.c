/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_desc_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 09:57:12 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/14 20:24:18 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_desc_len(const char *format)
{
	int i;

	i = 1;
	while (ft_strchr(FLAGS, format[i]) && format[i])
		i++;
	if (ft_strchr(CONVERSIONS, format[i]) && format[i])
		return (i + 1);
	else if ((format[i] == '%') && format[i])
		return (i + 1);
	else if (ft_isalpha(format[i]) && format[i])
		return (i + 1);
	return (i);
}

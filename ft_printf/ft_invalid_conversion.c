/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invalid_conversion.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 07:50:14 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/14 20:20:24 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_invalid_conversion(int *bytes, char *desc,
		t_arg arg)
{
	char	*str;
	int		len;

	len = (int)ft_strlen(desc);
	str = (char *)malloc(sizeof(*str) + 1);
	str[0] = desc[len - 1];
	str[1] = '\0';
	ft_process_percent_width(&str, arg);
	ft_putstr(str);
	*bytes += ft_strlen(str);
}

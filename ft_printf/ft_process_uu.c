/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_uu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:35:12 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/13 06:39:23 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_uu(va_list ap, int *bytes, char *desc, t_arg arg)
{
	unsigned long	nbr;
	char			*str;

	nbr = va_arg(ap, unsigned long);
	g_nbr = 1;
	str = ft_unsigned_long_to_ascii_base(nbr, 10);
	str = ft_process_d_precision(str, arg);
	if (arg.precision == 0 && nbr == 0 && ft_strchr(desc, '.'))
		str[0] = '\0';
	str = ft_process_d_width(str, arg);
	ft_putstr(str);
	*bytes = *bytes + ft_strlen(str);
}

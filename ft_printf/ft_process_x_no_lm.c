/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_x_no_lm.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:37:36 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/13 06:41:24 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_x_no_lm(va_list ap, int *bytes, char *desc, t_arg arg)
{
	unsigned int	nbr;
	char			*str;

	nbr = va_arg(ap, unsigned int);
	str = ft_itoabase(nbr, 16);
	g_nbr = 1;
	str = ft_process_d_precision(str, arg);
	if (arg.precision == 0 && nbr == 0 && ft_strchr(desc, '.'))
		str[0] = '\0';
	if (arg.flag_hash && nbr != 0)
		str = ft_strjoin("0x", str);
	str = ft_process_d_width(str, arg);
	ft_putstr(str);
	*bytes = *bytes + ft_strlen(str);
}

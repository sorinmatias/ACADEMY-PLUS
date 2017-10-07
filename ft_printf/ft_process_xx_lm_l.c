/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_xx_lm_l.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:37:58 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/13 06:44:01 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_xx_lm_l(va_list ap, int *bytes, char *desc, t_arg arg)
{
	unsigned long	nbr;
	char			*str;

	nbr = va_arg(ap, unsigned long);
	str = ft_itoabbase(nbr, 16);
	g_nbr = 1;
	str = ft_process_d_precision(str, arg);
	if (arg.precision == 0 && nbr == 0 && ft_strchr(desc, '.'))
		str[0] = '\0';
	if (arg.flag_hash && nbr != 0)
		str = ft_strjoin("0X", str);
	str = ft_process_d_width(str, arg);
	ft_putstr(str);
	*bytes = *bytes + ft_strlen(str);
}

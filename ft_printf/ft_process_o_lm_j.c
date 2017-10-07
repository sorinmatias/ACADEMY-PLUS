/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_o_lm_j.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:29:35 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/13 06:40:22 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_o_lm_j(va_list ap, int *bytes, char *desc, t_arg arg)
{
	uintmax_t	nbr;
	char		*str;

	nbr = va_arg(ap, uintmax_t);
	str = ft_uintmax_t_to_ascii_base(nbr, 8);
	g_nbr = 1;
	str = ft_process_d_precision(str, arg);
	if (arg.precision == 0 && nbr == 0 && ft_strchr(desc, '.'))
	{
		str[0] = '\0';
		if (arg.flag_hash)
			str = ft_strdup("0");
	}
	if (arg.flag_hash && nbr != 0 && !arg.precision)
		str = ft_strjoin("0", str);
	str = ft_process_d_width(str, arg);
	ft_putstr(str);
	*bytes = *bytes + ft_strlen(str);
}

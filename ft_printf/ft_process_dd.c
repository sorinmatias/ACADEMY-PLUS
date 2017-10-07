/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_dd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:06:36 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/13 06:10:05 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_dd(va_list ap, int *bytes, char *desc, t_arg arg)
{
	long	nbr;
	char	*str;

	nbr = va_arg(ap, long);
	g_nbr = nbr;
	str = ft_long_to_ascii_base(nbr, 10);
	if (arg.precision)
	{
		str = ft_process_d_precision(str, arg);
		if (nbr < 0)
			str = ft_strjoin("-", str);
	}
	if (nbr < 0 && !arg.precision && !arg.width)
		str = ft_strjoin("-", str);
	if (arg.precision == 0 && nbr == 0 && ft_strchr(desc, '.'))
		str[0] = '\0';
	if (arg.width)
		str = ft_process_d_width(str, arg);
	if (arg.flag_plus && nbr >= 0)
		ft_process_d_put_flag_plus(bytes, &str, arg);
	else if (arg.flag_space && nbr >= 0)
		ft_process_d_put_flag_space(bytes, &str, arg);
	ft_putstr(str);
	*bytes += ft_strlen(str);
}

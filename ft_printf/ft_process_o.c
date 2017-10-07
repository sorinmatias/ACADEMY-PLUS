/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_o.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:23:59 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/13 06:40:10 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_o_lm_z(va_list ap, int *bytes, char *desc, t_arg arg)
{
	size_t	nbr;
	char	*str;

	nbr = va_arg(ap, size_t);
	str = ft_size_t_to_ascii_base(nbr, 8);
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

void	ft_process_o_lm_h(va_list ap, int *bytes, char *desc, t_arg arg)
{
	unsigned short	nbr;
	char			*str;

	nbr = va_arg(ap, unsigned int);
	str = ft_unsigned_short_to_ascii_base(nbr, 8);
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

void	ft_process_o_lm_ll(va_list ap, int *bytes, char *desc, t_arg arg)
{
	unsigned long long	nbr;
	char				*str;

	nbr = va_arg(ap, unsigned long long);
	str = ft_unsigned_long_long_to_ascii_base(nbr, 8);
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

void	ft_process_o_no_lm(va_list ap, int *bytes, char *desc, t_arg arg)
{
	unsigned int	nbr;
	char			*str;

	nbr = va_arg(ap, unsigned int);
	str = ft_itoabase(nbr, 8);
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

void	ft_process_o(va_list ap, int *bytes, char *desc, t_arg arg)
{
	if (arg.lm_l)
		ft_process_oo(ap, bytes, desc, arg);
	else if (arg.lm_ll)
		ft_process_o_lm_ll(ap, bytes, desc, arg);
	else if (arg.lm_hh)
		ft_process_c(ap, bytes, desc, arg);
	else if (arg.lm_h)
		ft_process_o_lm_h(ap, bytes, desc, arg);
	else if (arg.lm_j)
		ft_process_o_lm_j(ap, bytes, desc, arg);
	else if (arg.lm_z)
		ft_process_o_lm_z(ap, bytes, desc, arg);
	else
		ft_process_o_no_lm(ap, bytes, desc, arg);
}

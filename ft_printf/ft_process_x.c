/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:37:24 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/13 06:44:30 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_x_lm_l(va_list ap, int *bytes, char *desc, t_arg arg)
{
	unsigned long	nbr;
	char			*str;

	nbr = va_arg(ap, unsigned long);
	str = ft_unsigned_long_to_ascii_base(nbr, 16);
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

void	ft_process_x_lm_ll(va_list ap, int *bytes, char *desc, t_arg arg)
{
	unsigned long long	nbr;
	char				*str;

	nbr = va_arg(ap, unsigned long long);
	str = ft_unsigned_long_long_to_ascii_base(nbr, 16);
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

void	ft_process_x_lm_z(va_list ap, int *bytes, char *desc, t_arg arg)
{
	size_t	nbr;
	char	*str;

	nbr = va_arg(ap, size_t);
	str = ft_size_t_to_ascii_base(nbr, 16);
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

void	ft_process_x_lm_j(va_list ap, int *bytes, char *desc, t_arg arg)
{
	uintmax_t	nbr;
	char		*str;

	nbr = va_arg(ap, uintmax_t);
	str = ft_uintmax_t_to_ascii_base(nbr, 16);
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

void	ft_process_x(va_list ap, int *bytes, char *desc, t_arg arg)
{
	if (arg.lm_hh)
		ft_process_c(ap, bytes, desc, arg);
	else if (arg.lm_l)
		ft_process_x_lm_l(ap, bytes, desc, arg);
	else if (arg.lm_ll)
		ft_process_x_lm_ll(ap, bytes, desc, arg);
	else if (arg.lm_j)
		ft_process_x_lm_j(ap, bytes, desc, arg);
	else if (arg.lm_z)
		ft_process_x_lm_z(ap, bytes, desc, arg);
	else
		ft_process_x_no_lm(ap, bytes, desc, arg);
}

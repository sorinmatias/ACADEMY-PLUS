/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:34:59 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/13 06:39:50 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_u_lm_ll(va_list ap, int *bytes, char *desc, t_arg arg)
{
	unsigned long long	nbr;
	char				*str;

	nbr = va_arg(ap, unsigned long long);
	g_nbr = 1;
	str = ft_unsigned_long_long_to_ascii_base(nbr, 10);
	str = ft_process_d_precision(str, arg);
	if (arg.precision == 0 && nbr == 0 && ft_strchr(desc, '.'))
		str[0] = '\0';
	str = ft_process_d_width(str, arg);
	ft_putstr(str);
	*bytes = *bytes + ft_strlen(str);
}

void	ft_process_u_lm_j(va_list ap, int *bytes, char *desc, t_arg arg)
{
	uintmax_t	nbr;
	char		*str;

	nbr = va_arg(ap, uintmax_t);
	g_nbr = 1;
	str = ft_uintmax_t_to_ascii_base(nbr, 10);
	str = ft_process_d_precision(str, arg);
	if (arg.precision == 0 && nbr == 0 && ft_strchr(desc, '.'))
		str[0] = '\0';
	str = ft_process_d_width(str, arg);
	ft_putstr(str);
	*bytes = *bytes + ft_strlen(str);
}

void	ft_process_u_lm_z(va_list ap, int *bytes, char *desc, t_arg arg)
{
	size_t	nbr;
	char	*str;

	nbr = va_arg(ap, size_t);
	g_nbr = 1;
	str = ft_size_t_to_ascii_base(nbr, 10);
	str = ft_process_d_precision(str, arg);
	if (arg.precision == 0 && nbr == 0 && ft_strchr(desc, '.'))
		str[0] = '\0';
	str = ft_process_d_width(str, arg);
	ft_putstr(str);
	*bytes = *bytes + ft_strlen(str);
}

void	ft_process_u_uint(va_list ap, int *bytes, char *desc, t_arg arg)
{
	unsigned int	nbr;
	char			*str;

	nbr = va_arg(ap, unsigned int);
	g_nbr = 1;
	str = ft_unsigned_int_to_ascii_base(nbr, 10);
	str = ft_process_d_precision(str, arg);
	if (arg.precision == 0 && nbr == 0 && ft_strchr(desc, '.'))
		str[0] = '\0';
	str = ft_process_d_width(str, arg);
	ft_putstr(str);
	*bytes += ft_strlen(str);
}

void	ft_process_u(va_list ap, int *bytes, char *desc, t_arg arg)
{
	if (arg.lm_hh)
		ft_process_c(ap, bytes, desc, arg);
	else if (arg.lm_l)
		ft_process_uu(ap, bytes, desc, arg);
	else if (arg.lm_ll)
		ft_process_u_lm_ll(ap, bytes, desc, arg);
	else if (arg.lm_j)
		ft_process_u_lm_j(ap, bytes, desc, arg);
	else if (arg.lm_z)
		ft_process_u_lm_z(ap, bytes, desc, arg);
	else
		ft_process_u_uint(ap, bytes, desc, arg);
}

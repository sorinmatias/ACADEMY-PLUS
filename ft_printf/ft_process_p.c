/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 18:43:38 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/14 20:20:54 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_p_width_flag_minus(char **str, char **strp, t_arg arg)
{
	if (arg.width > (int)ft_strlen(*str))
	{
		*strp = ft_memalloc(arg.width - ft_strlen(*str) + 1);
		*strp = ft_memset(*strp, ' ', arg.width - ft_strlen(*str));
		*str = ft_strjoin(*str, *strp);
	}
}

char	*ft_process_p_width(char *str, t_arg arg)
{
	char *strp;

	if (arg.flag_minus)
		ft_process_p_width_flag_minus(&str, &strp, arg);
	else if (arg.flag_zero)
	{
		if (arg.width > (int)ft_strlen(str))
		{
			strp = ft_memalloc(arg.width - ft_strlen(str) + 1);
			strp = ft_memset(strp, '0', arg.width - ft_strlen(str));
			str = ft_strjoin(str, strp);
		}
	}
	if (arg.width > (int)ft_strlen(str))
	{
		strp = ft_memalloc(arg.width - ft_strlen(str) + 1);
		strp = ft_memset(strp, ' ', arg.width - ft_strlen(str));
		str = ft_strjoin(strp, str);
	}
	return (str);
}

void	ft_process_p(va_list ap, int *bytes, char *desc, t_arg arg)
{
	void	*voidp;
	char	*str;

	voidp = va_arg(ap, void *);
	str = ft_unsigned_long_to_ascii_base((unsigned long)voidp, 16);
	g_nbr = 1;
	str = ft_process_d_precision(str, arg);
	if (arg.precision == 0 && ft_atoi(str) == 0 && ft_strchr(desc, '.'))
		str[0] = '\0';
	str = ft_strjoin("0x", str);
	str = ft_process_p_width(str, arg);
	ft_putstr(str);
	*bytes += ft_strlen(str);
}

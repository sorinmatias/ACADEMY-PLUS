/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 19:34:32 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/28 06:27:25 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_s_width_precision(char **str, t_arg arg)
{
	char	*aux;
	int 	str_len;

	str_len = (int)ft_strlen(*str);
	if (arg.precision < str_len)
		*str = ft_strsub(*str, 0, arg.precision);
	if (arg.width > str_len)
	{
		aux = ft_memalloc(arg.width - str_len + 1);
		aux = ft_memset(aux, ' ', arg.width - str_len);
		*str = ft_strjoin(aux, *str);
	}
}

void	ft_process_s_flag_zero(char **str, t_arg arg)
{
	char *aux;
	int 	str_len;

	str_len = (int)ft_strlen(*str);
	if (arg.width > str_len)
	{
		aux = ft_memalloc(arg.width - str_len + 1);
		aux = ft_memset(aux, '0', arg.width - str_len);
		*str = ft_strjoin(aux, *str);
	}
}

void	ft_process_s_null_str_precision(int *bytes, char *desc, t_arg arg)
{
	char *str;

	str = ft_strdup("(null)");
	ft_process_s_width_precision(&str, arg);
	if (arg.precision == 0 && ft_strchr(desc, '.'))
		str = ft_strdup("");
	if (arg.width)
	{
		if (arg.flag_zero)
			ft_process_s_flag_zero(&str, arg);
		ft_process_s_width_precision(&str, arg);
	}
	ft_putstr(str);
	*bytes +=ft_strlen(str);
}

void	ft_process_s_val_str(char *str, int *bytes, char *desc, t_arg arg)
{
	if (arg.precision)
		ft_process_s_width_precision(&str, arg);
	if (arg.precision == 0 && ft_strchr(desc, '.'))
		str = ft_strdup("");
	if (arg.width)
	{
		if (arg.flag_zero)
			ft_process_s_flag_zero(&str, arg);
		ft_process_s_width_precision(&str, arg);
	}
	ft_putstr(str);
	*bytes += ft_strlen(str);
}

void	ft_process_s(va_list ap,int *bytes,char *desc,t_arg arg)
{
	char *str;

	if (arg.lm_l)
		ft_process_ss(ap, bytes, desc, arg);
	else
	{
		str = va_arg(ap, char *);
		if (str)
			ft_process_s_val_str(str, bytes, desc, arg);
		else if (!str && ft_strchr(desc, '.'))
			ft_process_s_null_str_precision(bytes, desc, arg);
		else
		{
			ft_putstr("(null)");
			*bytes += 6;
		}
	}
}
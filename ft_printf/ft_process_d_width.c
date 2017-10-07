/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_d_width.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:06:14 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/14 06:55:01 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_process_d_width_flag_minus(char *str, t_arg arg)
{
	char *strp;

	if (arg.width > (int)ft_strlen(str) && !arg.precision && g_nbr >= 0)
	{
		strp = ft_memalloc(arg.width - ft_strlen(str) + 1);
		strp = ft_memset(strp, ' ', arg.width - ft_strlen(str));
		str = ft_strjoin(str, strp);
		if (arg.flag_plus)
			str[ft_strlen(str) - 1] = '\0';
	}
	else if (arg.width > (int)ft_strlen(str) && !arg.precision && g_nbr < 0)
	{
		strp = ft_memalloc(arg.width - ft_strlen(str));
		strp = ft_memset(strp, ' ', arg.width - ft_strlen(str) - 1);
		str = ft_strjoin(str, strp);
		if (!arg.precision)
			str = ft_strjoin("-", str);
	}
	else if (arg.width > (int)ft_strlen(str) && arg.precision && arg.width)
	{
		strp = ft_memalloc(arg.width - ft_strlen(str) + 1);
		strp = ft_memset(strp, ' ', arg.width - ft_strlen(str));
		str = ft_strjoin(str, strp);
		if (arg.flag_plus && g_nbr > 0)
			str[ft_strlen(str) - 1] = '\0';
	}
	return (str);
}

char	*ft_process_d_width_flag_zero(char *str, t_arg arg)
{
	char *strp;

	if (arg.width > (int)ft_strlen(str) && !arg.precision && g_nbr >= 0)
	{
		strp = ft_memalloc(arg.width - ft_strlen(str) + 1);
		strp = ft_memset(strp, '0', arg.width - ft_strlen(str));
		str = ft_strjoin(strp, str);
	}
	else if (arg.width > (int)ft_strlen(str) && !arg.precision && g_nbr < 0)
	{
		strp = ft_memalloc(arg.width - ft_strlen(str));
		strp = ft_memset(strp, '0', arg.width - ft_strlen(str) - 1);
		str = ft_strjoin(strp, str);
		if (!arg.precision)
			str = ft_strjoin("-", str);
	}
	else if (arg.width > (int)ft_strlen(str) && arg.precision && arg.width)
	{
		strp = ft_memalloc(arg.width - ft_strlen(str) + 1);
		strp = ft_memset(strp, ' ', arg.width - ft_strlen(str));
		str = ft_strjoin(strp, str);
	}
	return (str);
}

char	*ft_process_d_width(char *str, t_arg arg)
{
	char *strp;

	if (arg.flag_minus)
		str = ft_process_d_width_flag_minus(str, arg);
	else if (arg.flag_zero)
		str = ft_process_d_width_flag_zero(str, arg);
	else if (arg.width > (int)ft_strlen(str) && g_nbr >= 0)
	{
		if (arg.flag_plus)
			str = ft_strjoin("+", str);
		strp = ft_memalloc(arg.width - ft_strlen(str) + 1);
		strp = ft_memset(strp, ' ', arg.width - ft_strlen(str));
		str = ft_strjoin(strp, str);
	}
	else if (arg.width > (int)ft_strlen(str) && g_nbr < 0)
	{
		if (!arg.precision)
			str = ft_strjoin("-", str);
		strp = ft_memalloc(arg.width - ft_strlen(str) + 1);
		strp = ft_memset(strp, ' ', arg.width - ft_strlen(str));
		str = ft_strjoin(strp, str);
	}
	return (str);
}

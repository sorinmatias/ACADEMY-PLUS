/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:33:19 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/13 06:48:58 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_percent_width(char **str, t_arg arg)
{
	char *strp;

	if (arg.width > (int)ft_strlen(*str))
	{
		if (arg.flag_minus)
		{
			strp = ft_memalloc(arg.width - ft_strlen(*str) + 1);
			strp = ft_memset(strp, ' ', arg.width - ft_strlen(*str));
			*str = ft_strjoin(*str, strp);
		}
		else if (arg.flag_zero)
		{
			strp = ft_memalloc(arg.width - ft_strlen(*str) + 1);
			strp = ft_memset(strp, '0', arg.width - ft_strlen(*str));
			*str = ft_strjoin(strp, *str);
		}
		else
		{
			strp = ft_memalloc(arg.width - ft_strlen(*str) + 1);
			strp = ft_memset(strp, ' ', arg.width - ft_strlen(*str));
			*str = ft_strjoin(strp, *str);
		}
	}
}

void	ft_process_percent(int *bytes, t_arg arg)
{
	char *str;

	str = ft_strdup("%");
	ft_process_percent_width(&str, arg);
	ft_putstr(str);
	*bytes += ft_strlen(str);
}

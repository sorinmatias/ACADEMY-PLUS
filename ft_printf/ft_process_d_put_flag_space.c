/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_d_put_flag_space.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:05:49 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/14 06:55:47 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_d_put_flag_space(int *bytes, char **str, t_arg arg)
{
	if (arg.width > (int)ft_strlen(ft_itoabase(g_nbr, 10)) && g_nbr >= 0 &&
			!arg.precision && !arg.flag_space)
		*str[0] = ' ';
	else if (arg.width > (int)ft_strlen(ft_itoabase(g_nbr, 10)) && g_nbr >= 0 &&
			!arg.precision && arg.flag_space)
		*str[0] = ' ';
	else if (!arg.flag_space)
	{
		ft_putchar(' ');
		*bytes += 1;
	}
	else if (!arg.width)
	{
		ft_putchar(' ');
		*bytes += 1;
	}
}

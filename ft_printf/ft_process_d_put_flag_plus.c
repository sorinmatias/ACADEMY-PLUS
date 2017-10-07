/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_d_put_flag_plus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:05:39 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/14 06:56:47 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_d_put_flag_plus(int *bytes, char **str, t_arg arg)
{
	if (arg.width > (int)ft_strlen(ft_itoabase(g_nbr, 10)) && g_nbr >= 0 &&
			!arg.precision && !arg.flag_plus)
		*str[0] = '+';
	else if (arg.width > (int)ft_strlen(ft_itoabase(g_nbr, 10)) && g_nbr >= 0 &&
			!arg.precision && arg.flag_zero)
		*str[0] = '+';
	else if (arg.width < (int)ft_strlen(ft_itoabase(g_nbr, 10)))
	{
		ft_putchar('+');
		*bytes += 1;
	}
	else if (arg.flag_minus && arg.width)
	{
		ft_putchar('+');
		*bytes += 1;
	}
}

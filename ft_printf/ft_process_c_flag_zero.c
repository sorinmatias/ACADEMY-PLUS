/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_c_flag_zero.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:47:41 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/13 06:50:26 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_c_flag_zero(unsigned char c, int *bytes, t_arg arg)
{
	char	*strp;

	if (arg.width > 1)
	{
		strp = ft_memalloc(arg.width - 1 + 1);
		strp = ft_memset(strp, '0', arg.width - 1);
		ft_putstr(strp);
		*bytes += ft_strlen(strp);
		ft_putchar(c);
		*bytes = *bytes + 1;
	}
}

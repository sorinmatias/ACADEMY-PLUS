/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_d_precision.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 05:56:44 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/13 06:08:35 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_process_d_precision(char *str, t_arg arg)
{
	char *str0;

	if (arg.precision > (int)ft_strlen(str))
	{
		str0 = ft_memalloc(arg.precision - ft_strlen(str) + 1);
		str0 = ft_memset(str0, '0', arg.precision - ft_strlen(str));
		str = ft_strjoin(str0, str);
	}
	return (str);
}

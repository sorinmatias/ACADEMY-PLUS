/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 07:45:26 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/14 06:57:51 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ftoa(double val, int precision)
{
	char		*str;
	char		*str2;
	int			i;
	intmax_t	int_part;
	intmax_t	decimal_part;

	int_part = val;
	i = 0;
	val = val - int_part;
	while (i < precision)
	{
		val = val * 10;
		i++;
	}
	decimal_part = val * 0.1 * 10;
	if (decimal_part < 0)
		decimal_part = -1 * decimal_part;
	str = ft_intmax_t_to_ascii_base(int_part, 10);
	str = ft_strjoin(str, ".");
	str2 = ft_intmax_t_to_ascii_base(decimal_part, 10);
	str = ft_strjoin(str, str2);
	return (str);
}

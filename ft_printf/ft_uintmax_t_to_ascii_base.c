/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintmax_t_to_ascii_base.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 20:11:30 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/10 20:13:05 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_uintmax_t_to_ascii_base(uintmax_t val, int base)
{
	static char	buf[32] = "0";
	int			i;

	i = 30;
	if (val == 0)
		return (ft_strdup("0"));
	while (val > 0 && i > 0)
	{
		buf[i] = "0123456789abcdef"[val % base];
		val = val / base;
		--i;
	}
	return (buf + i + 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:21:53 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 11:22:14 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strisprint(int *str)
{
	while (*str)
	{
		if (ft_isprint(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}

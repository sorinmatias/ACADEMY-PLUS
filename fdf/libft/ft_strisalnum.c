/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisalnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:14:55 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 11:18:00 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strisalnum(int *str)
{
	while (*str)
	{
		if (ft_isalnum(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
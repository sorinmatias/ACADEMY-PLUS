/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 10:58:56 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 10:58:58 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nblen(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
		len++;
	while (nbr >= 10 || nbr <= -10)
	{
		nbr = nbr / 10;
		len++;
	}
	len++;
	return (len);
}

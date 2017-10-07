/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 17:59:39 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/28 18:03:09 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_wcharsize(wchar_t wc)
{
	int size;

	size = 0;
	if (wc <= 127)
		size = 1;
	else if (wc <= 2047)
		size = 2;
	else if (wc <= 65535)
		size = 3;
	else if (wc <= 1114111)
		size = 4;
	return (size);
}
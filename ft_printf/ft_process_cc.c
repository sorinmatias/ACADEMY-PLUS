/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_cc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:48:15 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/13 06:51:11 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_process_cc(va_list ap, int *bytes)
{
	wchar_t wc;

	wc = va_arg(ap, wchar_t);
	ft_putwchar(wc);
	*bytes += ft_wcharsize(wc);
}

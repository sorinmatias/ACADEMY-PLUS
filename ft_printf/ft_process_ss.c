/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_ss.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 06:29:28 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/28 18:12:19 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

wchar_t	*ft_process_ss_precision(wchar_t *wstr, t_arg arg)
{
	if (arg.width < ft_wstrsize(wstr))
		wstr = ft_wstrsub(wstr, 0, arg.precision);
	return (wstr);
}

wchar_t	*ft_process_ss_width(wchar_t *wstr, t_arg arg)
{
	wchar_t *aux;

	if (arg.width > ft_wstrsize(wstr))
	{
		aux = (wchar_t*)malloc(sizeof(*aux) * (arg.width - ft_wstrsize(wstr)
			+ 1));
		aux[arg.width - ft_wstrsize(wstr)] = '\0';
		if (arg.flag_minus)
		{
			aux = ft_wmemset(aux, L' ', arg.width - ft_wstrsize(wstr));
			wstr = ft_wstrjoin(wstr, aux);
		}
		else if (arg.flag_zero)
		{
			aux = ft_wmemset(aux, L'0', arg.width - ft_wstrsize(wstr));
			wstr = ft_wstrjoin(aux, wstr);
		}
		else
		{
			aux = ft_wmemset(aux, L' ', arg.width - ft_wstrsize(wstr));
			wstr = ft_wstrjoin(aux, wstr);
		}
	}
	return (wstr);
}

void	ft_process_ss(va_list ap, int *bytes, char *desc, t_arg arg)
{
	wchar_t *wstr;
	int		i;

	i = 0;
	wstr = va_arg(ap, wchar_t *);
	if (wstr)
	{
		if (arg.precision)
			wstr = ft_process_ss_precision(wstr, arg);
		if (arg.precision == 0 && ft_strchr(desc, '.'))
			wstr = ft_wstrdup(L"");
		if (arg.width)
			wstr = ft_process_ss_width(wstr, arg);
		while (wstr[i])
		{
			ft_putwchar(wstr[i]);
			*bytes += ft_wcharsize(wstr[i]);
			i++;
		}
	}
	else
	{
		ft_putstr("(null)");
		*bytes += 6;
	}
}
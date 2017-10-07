/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 07:03:17 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/14 20:23:57 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conversion2(char *desc, int desc_len, va_list ap, int *bytes,
						t_arg arg)
{
	if (desc[desc_len - 1] == 'U')
		ft_process_uu(ap, bytes, desc, arg);
	else if (desc[desc_len - 1] == 'x')
		ft_process_x(ap, bytes, desc, arg);
	else if (desc[desc_len - 1] == 'X')
		ft_process_xx(ap, bytes, desc, arg);
	else if (desc[desc_len - 1] == 'c')
		ft_process_c(ap, bytes, desc, arg);
	else if (desc[desc_len - 1] == 'C')
		ft_process_cc(ap, bytes);
	else if (desc[desc_len - 1] == 'f' || desc[desc_len - 1] == 'F')
		ft_process_f(ap, bytes, desc, arg);
	else if (desc[desc_len - 1] == '%')
		ft_process_percent(bytes, arg);
	else
		ft_invalid_conversion(bytes, desc, arg);
}

void	ft_conversion(char *desc, int desc_len, va_list ap, int *bytes)
{
	t_arg arg;
	
	ft_init_flags_lm(&arg);
	ft_validate_flags(&arg, desc, ap);
	ft_validate_lm(&arg, desc);
	if (desc[desc_len - 1] == 's')
		ft_process_s(ap, bytes, desc, arg);
	else if (desc[desc_len - 1] == 'S')
		ft_process_ss(ap, bytes, desc, arg);
	else if (desc[desc_len - 1] == 'p')
		ft_process_p(ap, bytes, desc, arg);
	else if (desc[desc_len - 1] == 'd' || desc[desc_len - 1] == 'i')
		ft_process_d(ap, bytes, desc, arg);
	else if (desc[desc_len - 1] == 'D')
		ft_process_dd(ap, bytes, desc, arg);
	else if (desc[desc_len - 1] == 'o')
		ft_process_o(ap, bytes, desc, arg);
	else if (desc[desc_len - 1] == 'O')
		ft_process_oo(ap, bytes, desc, arg);
	else if (desc[desc_len - 1] == 'u')
		ft_process_u(ap, bytes, desc, arg);
	else
		ft_conversion2(desc, desc_len, ap, bytes, arg);

}

void 	ft_format_percent(const char *format, int *i, int *bytes, va_list ap)
{
	char	*desc;
	int		desc_len;

	if (ft_validate_descriptor(format + *i))
	{
		desc_len = ft_desc_len(format + *i);
		desc = ft_strsub(format, *i, desc_len);
		ft_conversion(desc, desc_len, ap, bytes);
		*i = *i + desc_len;
	}
	else
		{
			*i = *i + 1;
			while (ft_strchr(FLAGS, format[*i]) && format[*i])
				*i = *i + 1;
		}
}

int 	ft_format(const char *format, va_list ap)
{
	int bytes;
	int i;

	bytes = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			ft_format_percent(format, &i, &bytes, ap);
		else
		{
			ft_putchar(format[i]);
			bytes++;
			i++;
		}
	}
	return (bytes);
}
int 	ft_printf(const char *format, ...)
{
	va_list ap;
	int 	bytes;

	bytes = 0;
	va_start(ap, format);
	bytes = ft_format(format, ap);
	va_end(ap);
	return (bytes);
}
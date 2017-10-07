/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_flags.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 07:38:25 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/27 07:09:18 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_validate_flag_width(t_arg *arg, char *desc, int *i)
{
	int j;

	arg->width = ft_atoi(desc + *i);
	j = ft_strlen(ft_itoa(arg->width));
	while (j > 1)
	{
		j--;
		(*i)++;
	}
}

void	ft_validate_flag_precision(t_arg *arg, char *desc, int *i)
{
	arg->precision = ft_atoi(desc + *i + 1);
	while (ft_isdigit(desc[*i + 1]))
		(*i)++;
}

void	ft_validate_flag_precision_asterix(t_arg *arg, char *desc, va_list ap)
{
	arg->precision = va_arg(ap, int);
	if (arg->precision < 0 && desc[ft_strlen(desc) - 1] == 's')
		arg->precision *= -1;
	else if (arg->precision < 0)
		arg->precision = 0;
}

void	ft_validate_flag_width_asterix(t_arg *arg, va_list ap)
{
	arg->width = va_arg(ap, int);
	if (arg->width < 0)
	{
		arg->width *= -1;
		arg->flag_minus = 1;
	}
}

void	ft_validate_flags(t_arg *arg, char *desc, va_list ap)
{
	int i;

	i = 0;
	while (desc[i])
	{
		if (ft_isdigit(desc[i]) && desc[i] != '0')
			ft_validate_flag_width(arg, desc, &i);
		else if (desc[i] == '.')
			ft_validate_flag_precision(arg, desc, &i);
		else if (desc[i] == '*' && desc[i - 1] == '.')
			ft_validate_flag_precision_asterix(arg, desc, ap);
		else if (desc[i] == '*' && desc[i - 1] == '.')
			ft_validate_flag_width_asterix(arg, ap);
		else if (desc[i] == '#')
			arg->flag_hash = 1;
		else if(desc[i] == '0')
			arg->flag_zero = 1;
		else if (desc[i] == '-')
			arg->flag_minus = 1;
		else if (desc[i] == '+')
			arg->flag_plus = 1;
		else if (desc[i] == ' ')
			arg->flag_space = 1;
		i++;
	}
}
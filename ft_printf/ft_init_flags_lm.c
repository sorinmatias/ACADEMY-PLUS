/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flags_lm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 07:35:32 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/25 07:37:33 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_flags_lm(t_arg *arg)
{
	arg->precision = 0;
	arg->width = 0;
	arg->flag_hash = 0;
	arg->flag_zero = 0;
	arg->flag_minus = 0;
	arg->flag_plus = 0;
	arg->flag_space = 0;
	arg->lm_j = 0;
	arg->lm_z = 0;
	arg->lm_h = 0;
	arg->lm_hh = 0;
	arg->lm_l = 0;
	arg->lm_ll = 0;
}
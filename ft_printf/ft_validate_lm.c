/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_lm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 19:25:53 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/25 19:33:22 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_validate_lm(t_arg *arg, char *desc)
{
	int i;

	i = 0;
	while (desc[i])
	{
		if (desc[i] == 'h' && desc[i + 1] == 'h')
		{
			arg->lm_hh = 1;
			i++;
		}
		else if (desc[i] == 'h')
			arg->lm_h = 1;
		else if (desc[i] == 'l' && desc[i + 1] == 'l')
		{
			arg->lm_ll = 1;
			i++;
		}
		else if (desc[i] == 'l')
			arg->lm_l = 1;
		else if (desc[i] == 'j')
			arg->lm_j = 1;
		else if (desc[i] == 'z')
			arg->lm_z = 1;
		i++;
	}
}
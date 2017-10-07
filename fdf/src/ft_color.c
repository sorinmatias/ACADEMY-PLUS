/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 11:12:00 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 13:37:42 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_color(t_env *m, t_point v)
{
	int red;
	int green;
	int blue;

	if (m->c_cst)
		if (v.color)
			return (v.color);
		else
			return (0xFFFFFF);
	else if (!m->c_cst)
	{
		if (v.h == m->hmin || v.h < 0.00001)
			return (0xFFFFFF);
		red = v.h / (m->hmax) * 255;
		blue = (red << 16) + (red << 8);
		green = (red << 16) + red;
		red = (red << 8) + red;
		if (m->clr == 'r')
			return (0xFFFFFF - red);
		if (m->clr == 'b')
			return (0xFFFFFF - blue);
		return (0xFFFFFF - green);
	}
	return (0xFFFFFF);
}

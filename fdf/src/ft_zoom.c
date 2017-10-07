/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zoom.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:49:52 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 14:03:34 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_adjust_map_i(t_env *m, int sx, int sy)
{
	int i;
	int j;

	i = -1;
	while (++i < m->row)
	{
		j = -1;
		while (++j < m->col)
		{
			m->map_i[i][j].x += sx;
			m->map_i[i][j].y += sy;
		}
	}
}

void	ft_zoom(t_env *m, int keycode)
{
	int sx;
	int sy;

	sx = m->map_i[0][0].x;
	sy = m->map_i[0][0].y;
	if (keycode == 78 && m->tile_height >= 1)
		m->tile_height /= 1.5;
	if (keycode == 69)
		m->tile_height *= 1.5;
	m->map_i = ft_init_map_i(m);
	sx -= m->map_i[0][0].x;
	sy -= m->map_i[0][0].y;
	ft_adjust_map_i(m, sx, sy / 2);
}

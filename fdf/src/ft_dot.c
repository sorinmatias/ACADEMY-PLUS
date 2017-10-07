/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 13:38:25 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 13:38:32 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_dot(t_env *m)
{
	int i;
	int j;

	mlx_clear_window(m->mlx, m->win);
	i = -1;
	while (++i < m->row)
	{
		j = -1;
		while (++j < m->col)
			mlx_pixel_put(m->mlx, m->win, m->map_i[i][j].x, m->map_i[i][j].y,
					ft_color(m, m->map_i[i][j]));
	}
	ft_show_usage(m);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_usage.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:54:06 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 13:55:42 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_show_usage(t_env *m)
{
	mlx_string_put(m->mlx, m->win, 10, 10, 0xFFFFFF, "Usage:");
	mlx_string_put(m->mlx, m->win, 10, 30, 0xFFFFFF,
			"Directional keys to move");
	mlx_string_put(m->mlx, m->win, 10, 50, 0xFFFFFF,
			"Arrows: Left / Up / Right / Down");
	mlx_string_put(m->mlx, m->win, 10, 70, 0xFFFFFF, "Height: PgUp / PgDown");
	mlx_string_put(m->mlx, m->win, 10, 90, 0xFFFFFF, "Zoom: + / -");
	mlx_string_put(m->mlx, m->win, 10, 110, 0xFFFFFF,
			"Color: (r)ed, (g)reen, (b)lue");
	mlx_string_put(m->mlx, m->win, 10, 130, 0xFFFFFF,
			"Display: do(t) / gri(d)");
	mlx_string_put(m->mlx, m->win, 10, 150, 0xFFFFFF, "(c)enter / reset (m)ap");
	mlx_string_put(m->mlx, m->win, 10, 170, 0xFFFFFF, "Exit: Esc");
}

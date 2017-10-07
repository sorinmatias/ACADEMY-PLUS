/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_connect_points.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 06:54:55 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/16 09:48:38 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_connect_points(t_env *m)
{
	int i;
	int j;

	i = -1;
	while (++i < m->row)
	{
		j = -1;
		while (++j < m->col)
		{
			if (j < m->col - 1)
				draw_line((m->map_i)[i][j], (m->map_i)[i][j + 1], m);
			if (i < m->row - 1)
				draw_line((m->map_i)[i][j], (m->map_i)[i + 1][j], m);
		}
	}
}

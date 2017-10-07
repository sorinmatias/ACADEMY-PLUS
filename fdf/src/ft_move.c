/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 17:40:06 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/14 18:02:49 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_move(t_env *m, int keycode)
{
	int i;
	int j;

	i = -1;
	while (++i < m->row)
	{
		j = -1;
		while (++j < m->col)
			if (keycode == 123)
				m->map_i[i][j].x -= 17;
			else if (keycode == 124)
				m->map_i[i][j].x += 17;
			else if (keycode == 126)
				m->map_i[i][j].y -= 17;
			else if (keycode == 125)
				m->map_i[i][j].y += 17;
	}
}

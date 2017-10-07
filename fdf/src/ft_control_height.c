/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_height.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 11:53:30 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/17 13:45:24 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_control_height(t_env *m, int control)
{
	int i;
	int j;

	i = -1;
	while (++i < m->row)
	{
		j = -1;
		while (++j < m->col)
			if (control == -1 && m->map_i[i][j].h)
				m->map_i[i][j].y += m->map_i[i][j].h * 1.5;
			else if (control == 1 && m->map_i[i][j].h)
				m->map_i[i][j].y -= m->map_i[i][j].h * 1.5;
	}
}

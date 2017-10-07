/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:13:41 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 16:38:58 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_point		**ft_init_map(t_env *m)
{
	t_point **temp;
	int		i;
	int		j;

	temp = (t_point**)malloc(sizeof(*temp) * (m->row));
	i = -1;
	while (++i < m->row)
	{
		j = -1;
		temp[i] = (t_point*)malloc(sizeof(t_point) * m->col);
		while (++j < m->col)
		{
			temp[i][j] = ft_assign_point(j, i, m->mi[i][j].h,
					m->mi[i][j].color);
			m->hmin = (m->hmin > (m->mi)[i][j].h) ? (m->mi)[i][j].h : m->hmin;
			m->hmax = (m->hmax < (m->mi)[i][j].h) ? (m->mi)[i][j].h : m->hmax;
		}
	}
	return (temp);
}

int			*ft_offset(t_env *m, t_point **aux)
{
	int *oxy;
	int i;
	int j;

	oxy = (int*)malloc(sizeof(int) * 4);
	oxy[0] = aux[0][0].x;
	oxy[1] = aux[0][0].x;
	oxy[2] = aux[0][0].y;
	oxy[3] = aux[0][0].y;
	i = -1;
	while (++i < m->row)
	{
		j = -1;
		while (++j < m->col)
		{
			oxy[0] = (oxy[0] > aux[i][j].x) ? aux[i][j].x : oxy[0];
			oxy[1] = (oxy[1] < aux[i][j].x) ? aux[i][j].x : oxy[1];
			oxy[2] = (oxy[2] > aux[i][j].y) ? aux[i][j].y : oxy[2];
			oxy[3] = (oxy[3] < aux[i][j].y) ? aux[i][j].y : oxy[3];
		}
	}
	return (oxy);
}

void		ft_center_map(t_env *m, t_point **aux)
{
	int i;
	int j;
	int *oxy;

	oxy = ft_offset(m, aux);
	i = -1;
	while (++i < m->row)
	{
		j = -1;
		while (++j < m->col)
		{
			aux[i][j].x += (WIDTH - oxy[1] - oxy[0]) / 2;
			aux[i][j].y += (HEIGHT - oxy[3] - oxy[2]) / 2;
		}
	}
}

t_point		**ft_init_map_i(t_env *m)
{
	t_point	**a;
	int		i;
	int		j;

	a = ft_init_map(m);
	i = -1;
	while (++i < m->row)
	{
		j = -1;
		while (++j < m->col)
			a[i][j] = ft_assign_point(WIDTH / 2 + a[i][j].x * m->tile_height *
					cos(DEG30) - a[i][j].y * m->tile_height * cos(DEG30),
					HEIGHT / 2 + a[i][j].x * m->tile_height * sin(DEG30) +
					a[i][j].y * m->tile_height * sin(DEG30) - a[i][j].h *
					m->tile_height, a[i][j].h, a[i][j].color);
	}
	ft_center_map(m, a);
	return (a);
}

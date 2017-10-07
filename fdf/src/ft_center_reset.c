/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_center_reset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 19:41:58 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 13:34:14 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_reset(t_env *m)
{
	m->tile_height = m->tile_width;
	m->map_i = ft_init_map_i(m);
}

void	ft_center(t_env *m)
{
	ft_center_map(m, m->map_i);
}

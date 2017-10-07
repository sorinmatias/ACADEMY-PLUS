/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tile_width_height.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 19:20:07 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 13:56:14 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

float		ft_get_tile_height(int row, int col)
{
	int max;
	int	tile;

	max = (row > col) ? row : col;
	tile = (WIDTH / (max + 70));
	tile = (tile < 1) ? 1 : tile;
	return (tile);
}

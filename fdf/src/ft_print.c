/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 20:23:45 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 13:55:16 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_print_map(t_point **map, int row, int col)
{
	int i;
	int j;

	i = -1;
	while (++i < row)
	{
		j = -1;
		while (++j < col)
		{
			ft_putchar('(');
			ft_putnbr(map[i][j].x);
			ft_putstr(", ");
			ft_putnbr(map[i][j].y);
			ft_putstr(", ");
			ft_putnbr(map[i][j].h);
			ft_putstr(", ");
			ft_putnbr(map[i][j].color);
			ft_putchar(')');
		}
		ft_putchar('\n');
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 08:06:49 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/10 06:20:45 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_exit()
{
	exit(1);
	return (0);
}

void	put_img_pixel(t_fractol *data, int x, int y, int color)
{
	if (data->x < WIDTH && data->y < WIDTH)
	{
		color = mlx_get_color_value(data->mlx, color);
		ft_memcpy(data->img_ptr + 4 * WIDTH * y + x * 4, &color, sizeof(int));
	}
}

void	ft_put_text(t_fractol *data)
{
	char	*text;
	char	*nr;

	nr = ft_itoa(data->max_iter);
	text = ft_strjoin("Iterations: ", nr);
	mlx_string_put(data->mlx, data->win, 10, 10, 0xFFFFFF, "Usage\0");
	mlx_string_put(data->mlx, data->win, 10, 25, 0xFFFFFF, text);
	mlx_string_put(data->mlx, data->win, 10, 40, 0xFFFFFF,
		"Movement: Up / Down / Left / Right\0");
	mlx_string_put(data->mlx, data->win, 10, 55, 0xFFFFFF, "Color: c\0");
	mlx_string_put(data->mlx, data->win, 10, 70, 0xFFFFFF,
		"Zoom : + / - or mouse click\0");
	ft_strdel(&text);
	ft_strdel(&nr);
}
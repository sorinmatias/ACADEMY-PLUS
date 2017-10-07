/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 06:20:24 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/10 10:27:14 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		mouse_julia(int x, int y, t_fractol *data)
{
	if (data->fract_ship == 1 && data->julia_mouse == 1)
	{
		data->c_x = x * 2;
		data->c_y = y * 2 - 800;
		fractol_calc(data);
	}
	return (0);
}

void	julia_init(t_fractol *data)
{
	data->max_iter = 139;
	data->zoom = 200;
	data->x1 = -2.0;
	data->y1 = -1.9;
	data->color = 265;
	data->c_x = 0.285;
	data->c_y = 0.01;
	data->julia_mouse = 1;
}

void	julia_calc(t_fractol *data)
{
	data->z_x = data->x / data->zoom + data->x1;
	data->z_y = data->y / data->zoom + data->y1;
	data->iter = 0;
	while (data->z_x * data->z_x + data->z_y
			* data->z_y < 4 && data->iter < data->max_iter)
	{
		data->tmp = data->z_x;
		data->z_x = data->z_x * data->z_x -
			data->z_y * data->z_y - 0.8 + (data->c_x / WIDTH);
		data->z_y = 2 * data->z_y * data->tmp + data->c_y / WIDTH;
		data->iter++;
	}
	if (data->iter == data->max_iter)
		put_img_pixel(data, data->x, data->y, 0x000000);
	else
		put_img_pixel(data, data->x, data->y, (data->color * data->iter));
}

void	*julia(void *tab)
{
	double		tmp;
	t_fractol	*data;

	data = (t_fractol *)tab;
	data->x = -1;
	tmp = data->y;
	while (++data->x < WIDTH)
	{
		data->y = tmp - 1;
		while (++data->y < data->y_max)
			julia_calc(data);
	}
	return (tab);
}

void	julia_pthread(t_fractol *data)
{
	t_fractol	tab[8];
	pthread_t	pth[8];
	int			i;

	i = -1;
	while (++i < 8)
	{
		ft_memcpy((void*)&tab[i], (void*)data, sizeof(t_fractol));
		tab[i].y = 100 * i;
		tab[i].y_max = 100 * (i + 1);
	}
	i = -1;
	while (++i < 8)
		pthread_create(&pth[i], NULL, julia, &tab[i]);
	while (i--)
		pthread_join(pth[i + 1], NULL);
	mlx_put_image_to_window(data->mlx, data->win, data->img, 0, 0);
}
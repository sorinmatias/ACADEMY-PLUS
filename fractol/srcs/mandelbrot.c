/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 11:56:11 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/06 07:01:37 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	mandelbrot_init(t_fractol *data)
{
	data->max_iter = 37;
	data->zoom = 300;
	data->x1 = -2.05;
	data->y1 = -1.3;
	data->color = 265;
}

void	mandelbrot_calc(t_fractol *data)
{
	data->c_x = data->x / data->zoom + data->x1;
	data->c_y = data->y / data->zoom + data->y1;
	data->z_x = 0;
	data->z_y = 0;
	data->iter = -1;
	while (data->z_x * data->z_x + data->z_y * data->z_y < 4 &&
			++data->iter < data->max_iter)
		{
			data->tmp = data->z_x;
			data->z_x = data->z_x * data->z_x - data->z_y * data->z_y +
							data->c_x;
			data->z_y = 2 * data->z_y * data->tmp + data->c_y;
		}
	if (data->iter == data->max_iter)
		put_img_pixel(data, data->x, data->y, 0x000000);
	else
		put_img_pixel(data, data->x, data->y, (data->color * data->iter));
}

void	*mandelbrot(void *tab)
{
	t_fractol	*data;
	double		tmp;

	data = (t_fractol*)tab;
	data->x = -1;
	tmp = data->y;
	while (++data->x < WIDTH)
	{
		data->y = tmp -1;
		while (++data->y < data->y_max)
		{
			mandelbrot_calc(data);
		}
	}
	return (tab);
}

void	mandelbrot_pthread(t_fractol *data)
{
	t_fractol	tab[8];
	pthread_t	pth[8];
	int 		i;
	i = -1;
	while (++i < 8)
	{
		ft_memcpy((void*)&tab[i], (void*)data, sizeof(t_fractol));
		tab[i].y = 100 * i;
		tab[i].y_max = 100 * (i + 1);
	}
	i = -1;
	while (++i < 8)
		pthread_create(&pth[i], NULL, mandelbrot, &tab[i]);
	while (i--)
		pthread_join(pth[i + 1], NULL);
	mlx_put_image_to_window(data->mlx, data->win, data->img, 0, 0);
}
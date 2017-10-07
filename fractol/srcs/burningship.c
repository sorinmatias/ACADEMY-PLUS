/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burningship.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 06:38:19 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/06 06:51:55 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	burningship_init(t_fractol *data)
{
	data->max_iter = 37;
	data->zoom = 220;
	data->x1 = -2.2;
	data->y1 = -2.5;
	data->color = 265;
}

void	burningship_calc(t_fractol *data)
{
	data->c_x = data->x / data->zoom + data->x1;
	data->c_y = data->y / data->zoom + data->y1;
	data->z_x = 0;
	data->z_y = 0;
	data->iter = -1;
	while (data->z_x * data->z_x + data->z_y * data->z_y < 4
			&& ++data->iter < data->max_iter)
	{
		data->tmp = data->z_x * data->z_x - data->z_y * data->z_y + data->c_x;
		data->z_y = fabs(2 * data->z_x * data->z_y) + data->c_y;
		data->z_x = data->tmp;
	}
	if (data->iter == data->max_iter)
		put_img_pixel(data, data->x, data->y, 0x000000);
	else
		put_img_pixel(data, data->x, data->y, (data->color * data->iter));
}

void	*burningship(void *tab)
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
			burningship_calc(data);
	}
	return (tab);
}

void	burningship_pthread(t_fractol *data)
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
		pthread_create(&pth[i], NULL, burningship, &tab[i]);
	while (i--)
		pthread_join(pth[i + 1], NULL);
	mlx_put_image_to_window(data->mlx, data->win, data->img, 0, 0);
}
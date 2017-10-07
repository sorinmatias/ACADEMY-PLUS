/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 10:18:46 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/10 10:25:11 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	mlx_win_init(t_fractol *data, char *title)
{
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, WIDTH, WIDTH, title);
	data->img = mlx_new_image(data->mlx, WIDTH, WIDTH);
	data->img_ptr = mlx_get_data_addr(data->img,
			&data->bpp, &data->sl, &data->endian);
}

void	mlx_window(t_fractol *data, char *title)
{
	mlx_win_init(data, title);
	if ((fractol_comp(title, data)) == 0)
		ft_exit();
	fractol_init(data);
	mlx_hook(data->win, 6, 1L < 6, mouse_julia, data);
	mlx_hook(data->win, 17, 0L, ft_exit, data);
	mlx_key_hook(data->win, key_hook, data);
	mlx_mouse_hook(data->win, mouse_hook, data);
	mlx_loop(data->mlx);
}
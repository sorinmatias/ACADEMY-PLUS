/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 06:32:55 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/10 10:30:04 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	fractol_calc(t_fractol *data)
{
	if (data->max_iter < 0)
		data->max_iter = 0;
	if (data->fract == 0)
		mandelbrot_pthread(data);
	else if (data->fract == 1)
		julia_pthread(data);
	else if (data->fract == 2)
		burningship_pthread(data);
	ft_put_text(data);
}

void	fractol_init(t_fractol *data)
{
	if (data->fract == 0)
		mandelbrot_init(data);
	else if (data->fract == 1)
		julia_init(data);
	else if (data->fract == 2)
		burningship_init(data);
	fractol_calc(data);
}

int		fractol_comp(char *arg, t_fractol *data)
{
	if (ft_strcmp(arg, "mandelbrot") == 0)
		data->fract = 0;
	else if (ft_strcmp(arg, "julia") == 0)
		data->fract = 1;
	else if (ft_strcmp(arg, "burningship") == 0)
		data->fract = 2;
	else
	{
		ft_putendl("Usage /fractol \"mandelbrot\", \"julia\", \"burningship\"");
		return (0);
	}
	return (1);
}

int		main(int ac, char **av)
{
	t_fractol	*data;
	pid_t 		pid;
	int 		i;

	if (!(data = (t_fractol *)malloc(sizeof(t_fractol))))
		return (-1);
	i = 1;
	if (ac >= 2)
		while (i < ac)
		{
			pid = fork();
			if (pid == 0)
				i++;
			else if (pid > 0) 
				mlx_window(data, av[i]);
		}
	else
		ft_putendl("Usage /fractol \"mandelbrot\", \"julia\", \"burningship\"");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 06:28:50 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/16 07:08:15 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdlib.h>
# include "../libft/libft.h"
# include "../minilibx/mlx.h"
# include <math.h>
# include <pthread.h>
# define WIDTH 1000

typedef struct	s_fractol
{
	void		*mlx;
	void		*win;
	void		*img;
	void		*img_ptr;
	int			endian;
	int			sl;
	int			bpp;
	int 		fract;
	int			fract_mandel;
	int 		fract_julia;
	int 		fract_ship;
	int			color;
	int			julia_mouse;
	double		zoom;
	double		max_iter;
	double		x1;
	double		y1;
	double		x;
	double		y;
	double		y_max;
	double		c_x;
	double		c_y;
	double		z_x;
	double		z_y;
	double		iter;
	double		tmp;
	double		x2;
	double		y2;
}				t_fractol;

int				key_hook(int keycode, t_fractol *data);
int				key_hook2(int keycode, t_fractol *data);
// void			ft_zoom_in(int x, int y, t_fractol *data);
// void			ft_zoom_out(t_fractol *data);
int				mouse_hook(int mousecode, int x, int y, t_fractol *data);

void			mandelbrot_init(t_fractol *data);
// void			mandelbrot_calc(t_fractol *data);
// void			*mandelbrot(void *tab);
void			mandelbrot_pthread(t_fractol *data);

int				mouse_julia(int x, int y, t_fractol *data);
void			julia_init(t_fractol *data);
// void			julia_calc(t_fractol *data);
// void			*julia(void *tab);
void			julia_pthread(t_fractol *data);

void			burningship_init(t_fractol *data);
// void			burningship_calc(t_fractol *data);
// void			*burningship(void *tab);
void			burningship_pthread(t_fractol *data);

int				ft_exit();
void			put_img_pixel(t_fractol *data, int x, int y, int color);
void			ft_put_text(t_fractol *data);

void			fractol_calc(t_fractol *data);
void			fractol_init(t_fractol *data);
void			win_img_init(t_fractol *data, char *win_name);
void			mlx_window(t_fractol *data, char *title);
int				fractol_comp(char *arg, t_fractol *data);

#endif

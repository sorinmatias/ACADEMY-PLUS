/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 20:20:09 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 14:27:53 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H

# define FDF_H

# include <stdlib.h>
# include "../libft/libft.h"
# include "../minilibx/mlx.h"
# include <math.h>
# define WIDTH 1900
# define HEIGHT 950
# define DEG30 0.52398776
# define DEG15 0.261799388

typedef	struct			s_point
{
	float				x;
	float				y;
	float				h;
	int					color;
}						t_point;

typedef	struct			s_env
{
	void				*mlx;
	void				*win;
	int					col;
	int					row;
	float				tile_width;
	float				tile_height;
	char				clr;
	int					c_cst;
	int					hmin;
	int					hmax;
	t_point				**mi;
	t_point				**map_i;
}						t_env;

void					ft_error(char *str);
t_env					*ft_get_row_col(char *file);
void					ft_validate_line(char *line);
float					ft_get_tile_height(int row, int col);
int						ft_atoi_base(char *str, int base);
t_point					ft_assign_point(int x, int y, int h, int color);
t_env					*ft_init_env(char *file, t_env *m);
t_point					**ft_init_map_i(t_env *m);
int						expose_hook(t_env *m);
int						key_hook(int keycode, t_env *m);
void					ft_connect_points(t_env *m);
void					draw_line(t_point v1, t_point v2, t_env *m);
int						ft_color(t_env *m, t_point v);
int						ft_get_hmin(t_env *m);
int						ft_get_hmax(t_env *m);
void					ft_dot(t_env *m);
void					ft_control_height(t_env *m, int control);
void					ft_zoom(t_env *m, int keycode);
void					ft_move(t_env *m, int keycode);
void					ft_reset(t_env *m);
void					ft_center(t_env *m);
int						*ft_offset(t_env *m, t_point **aux);
void					ft_center_map(t_env *m, t_point **aux);
int						ft_fit_to_screen(t_env *m);
void					ft_show_usage(t_env *m);
void					ft_print_mi(int	**mi, int row, int col);
void					ft_print_map(t_point **map, int row, int col);

#endif

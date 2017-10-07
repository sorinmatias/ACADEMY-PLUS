#ifndef _FDF_H_
# define _FDF_H_

#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"
#include "../minilibx/mlx.h"
#include <math.h>
# define WIDTH 800
# define HEIGHT 450
# define DEG30 0.52398776
# define DEG15 0.261799388


typedef		struct  	s_point
{
	float				x;
	float				y;
	float				h;
	int 				color;
}						t_point;


typedef		struct 		s_env
{
	void				*mlx;
	void				*win;
	int					col;
	int					row;
	int 				tile_width;
	int 				tile_height;
	int 				step;
	int 				**mi;
	t_point				**map_p;
	t_point				**map_i;
}						t_env;

void		ft_error(char *str);
void		ft_perror(char *str);
t_env		*ft_get_row_col(char *file);
int			ft_get_tile_height(int row, int col);
int 		ft_get_step(t_env *m);
t_env		*ft_init_env(char *file, t_env *m);
t_point		**ft_init_map_i(t_env *m);
t_point		**ft_init_map_p(t_env *m);

int			expose_hook(t_env *m);
void		ft_draw_lines_between_points(t_env *m);
void		draw_line(t_point v1, t_point v2, t_env *m);


void		ft_draw_line(void *mlx, void *win, int x0, int y0, int x1, int y1, int color);
void		ft_print_mi(int	**mi, int row, int col);
void		ft_print_map(t_point **map, int row, int col);
#endif
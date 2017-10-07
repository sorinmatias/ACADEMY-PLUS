/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 05:27:22 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 13:55:03 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

char	*ft_jump_nr_color_space(char *line)
{
	while (ft_isdigit(*line) || (*line == '-' && ft_isdigit(*(line + 1))))
		line++;
	if (*line == ',' && *(line + 1) == '0' && *(line + 2) == 'x')
		while (*line++ != ' ')
			;
	while (*line == ' ')
		line++;
	return (line);
}

t_point	ft_assign_point(int x, int y, int h, int color)
{
	t_point	aux;

	aux.x = (float)x;
	aux.y = (float)y;
	aux.h = (float)h;
	aux.color = color;
	return (aux);
}

int		ft_get_color(char *line)
{
	char	*aux;
	int		i;
	int		contor;

	contor = 0;
	while (ft_isdigit(*line) || (*line == '-' && ft_isdigit(*(line + 1))))
		line++;
	if (*line == ',')
	{
		while (*line++ != ' ')
			contor++;
		line = line - (contor - 2);
		aux = ft_strsub(line, 0, contor - 3);
		i = -1;
		while (aux[++i])
			aux[i] = ft_toupper(aux[i]);
		return (ft_atoi_base(aux, 16));
	}
	return (0);
}

t_env	*ft_init_mi(int fd, t_env *m)
{
	int		y;
	int		x;
	char	*line;

	m->mi = (t_point**)malloc(sizeof(t_point*) * m->row);
	y = -1;
	while (ft_get_next_line(fd, &line) && ++y < m->row)
	{
		m->mi[y] = (t_point*)malloc(sizeof(t_point) * m->col);
		x = -1;
		ft_validate_line(line);
		while (*line && ++x < m->col)
		{
			m->mi[y][x] = ft_assign_point(x, y, ft_atoi(line),
					ft_get_color(line));
			m->c_cst = (m->mi[y][x].color != 0) ? m->c_cst + 1 : m->c_cst;
			line = ft_jump_nr_color_space(line);
			if (x != m->col - 1 && *line == '\0')
				m->mi[y][x] = ft_assign_point(x, y, 0, 0);
		}
	}
	return (m);
}

t_env	*ft_init_env(char *file, t_env *m)
{
	int		fd;

	m = ft_get_row_col(file);
	if ((fd = open(file, O_RDONLY)) < 0)
		ft_error("Cannot open file");
	m = ft_init_mi(fd, m);
	m->tile_height = ft_get_tile_height(m->row, m->col);
	m->tile_width = m->tile_height;
	m->mlx = mlx_init();
	m->win = mlx_new_window(m->mlx, WIDTH, HEIGHT, file);
	m->map_i = ft_init_map_i(m);
	while (ft_fit_to_screen(m))
		m->map_i = ft_init_map_i(m);
	m->clr = (m->c_cst == 0) ? 'r' : 'x';
	close(fd);
	return (m);
}

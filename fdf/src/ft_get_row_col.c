/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_row_col.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 19:17:20 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 13:44:04 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_get_col(char *line)
{
	int	col;

	col = 0;
	while (*line)
	{
		if (ft_isdigit(*line))
		{
			col++;
			while (ft_isdigit(*line))
				line++;
		}
		line++;
	}
	return (col);
}

t_env	*ft_get_row_col(char *file)
{
	int		fd;
	char	*line;
	t_env	*aux;

	aux = (t_env*)malloc(sizeof(t_env));
	if ((fd = open(file, O_RDONLY)) < 0)
		ft_error("Cannot open file");
	aux->row = 0;
	if (ft_get_next_line(fd, &line))
	{
		aux->row++;
		aux->col = ft_get_col(line);
		while (ft_get_next_line(fd, &line))
			aux->row++;
	}
	else
		ft_error("Empty file");
	close(fd);
	return (aux);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ant.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 02:11:27 by smatias-          #+#    #+#             */
/*   Updated: 2017/07/05 13:49:43 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	generate_ant_path(t_data *data)
{
	char	**path;
	int		rooms;
	int		i;

	rooms = count_path(data->path->path_list);
	i = rooms;
	path = data->path->path_list;
	while (i >= 1)
	{
		ft_add_ant(data, path[i - 1], -(i - 1));
		i--;
	}
}

void	ft_shift_ants(t_data *data)
{
	t_ant	*aux;

	aux = data->ant;
	while (aux)
	{
		(aux->id)++;
		aux = aux->next;
	}
}

void	ft_print_ants(t_data *data)
{
	t_ant	*aux;
	int		done;

	done = 0;
	aux = data->ant;
	while (aux)
	{
		if (!(ft_strcmp(aux->poz, data->st) == 0) && (aux->id >= 1 &&
			aux->id <=data->no_ant))
		{
			ft_putstr("L");
			ft_putnbr(aux->id);
			ft_putstr("-");
			ft_putstr(aux->poz);
			ft_putstr(" ");
			done++;
		}
		aux = aux->next;
	}
	if (done)
		ft_putstr("\n");
}

int		ft_count_ant_path(t_data *data)
{
	t_ant	*aux;
	int		contor;

	contor = 0;
	aux = data->ant;
	while (aux)
	{
		contor++;
		aux = aux->next;
	}
	return (contor);
}

void	ft_move_ants(t_data *data)
{
	int	i;
	int	ant_path;

	i = 0;
	ant_path = ft_count_ant_path(data);
	while (i < (data->no_ant + ant_path - 1))
	{
		ft_shift_ants(data);
		ft_print_ants(data);
		i++;
	}	
}
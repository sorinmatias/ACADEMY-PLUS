/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:01:13 by smatias-          #+#    #+#             */
/*   Updated: 2017/07/05 02:04:01 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		validate_path(t_data *data)
{
	int 	i;
	char	**path;

	i = 0;
	path = data->path->path_list;
	while (path[i])
	{
		if (ft_strcmp(path[i], data->nd) == 0)
			return (1);
		i++;
	}
	return (0);
}

char	*check_link(t_data *data, char *new_link)
{
	// printf("check_link\n");
	t_link	*aux;
	int		st_nd;

	aux = data->link;
	st_nd = 0;
	while (aux)
	{
		if (ft_strcmp(aux->st, new_link) == 0 && aux->status == 1)
			st_nd = 1;
		if (ft_strcmp(aux->nd, new_link) == 0&& aux->status == 1)
			st_nd = -1;
		if (st_nd != 0)
			break ;
		aux = aux->next;
	}
	if (st_nd != 0)
		aux->status = 0;
	if (st_nd == 1)
		return (aux->nd);
	if (st_nd == -1);
		return (aux->st);
	return (NULL);
}

void	build_path(t_data *data, char **path_list)
{
	// printf("build_path\n");
	int		i;
	char	*new_link;

	i = 0;
	new_link = data->st;
	path_list[0] = data->st;
	while (ft_strcmp(new_link, data->nd) != 0)
	{
		new_link = check_link(data, new_link);
		if (new_link)
			{
				i++;
				path_list[i] = new_link;
		// printf("test\n");
			}
		else if (!new_link)
		{
			if (!i)
				break;
			i--;
			new_link = path_list[i];
		}
	}
	path_list[i + 1] = NULL;
}

void	generate_path(t_data *data)
{
	// printf("generate_path\n");
	t_path	*aux;
	aux = (t_path*)malloc(sizeof(t_path));
	aux->no_rm = 0;
	aux->path_list = (char**)malloc(sizeof(char*) * count_rooms(data) + 1);
	data->path = aux;
	build_path(data, data->path->path_list);
}
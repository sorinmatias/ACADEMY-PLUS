/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 23:01:35 by smatias-          #+#    #+#             */
/*   Updated: 2017/07/04 23:24:36 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	ft_add_room(t_data *data, char *str)
{
	t_room	*current;
	t_room	*aux;
	char	*temp;

	aux = (t_room*)malloc(sizeof(t_room));
	aux->name = return_str_elem(str, ' ', 0);
	temp = return_str_elem(str, ' ', 1);
	aux->x = ft_atoi(temp);
	free(temp);
	temp = return_str_elem(str, ' ', 2);
	aux->y = ft_atoi(temp);
	free(temp);
	aux->next = NULL;
	if (!data->room)
		data->room = aux;
	else
	{
		current = data->room;
		while(current->next)
			current = current->next;
		current->next = aux;
	}
}

void	ft_add_link(t_data *data, char *str)
{
	t_link *current;
	t_link *aux;

	aux = (t_link *)malloc(sizeof(t_link));
	aux->st = return_str_elem(str, '-', 0);
	aux->nd = return_str_elem(str, '-', 1);
	aux->status = 1;
	aux->next = NULL;
	if (!data->link)
		data->link = aux;
	else
	{
		current = data->link;
		while(current->next)
			current = current->next;
		current->next = aux;
	}
}

void				ft_add_ant(t_data *data, char *pozition, int id)
{
	t_ant	*current;
	t_ant	*aux;

	aux = (t_ant *)malloc(sizeof(t_ant));
	aux->id = id;
	aux->poz = pozition;
	aux->next = NULL;
	if (!data->ant)
		data->ant = aux;
	else
	{
		current = data->ant;
		while(current->next)
			current = current->next;
		current->next = aux;
	}
}
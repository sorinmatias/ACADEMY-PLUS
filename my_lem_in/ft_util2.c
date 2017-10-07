/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 01:27:49 by smatias-          #+#    #+#             */
/*   Updated: 2017/07/05 02:10:32 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		count_rooms(t_data *data)
{
	t_room *aux;
	int		contor;

	contor = 0;
	aux = data->room;
	while (aux)
	{
		aux = aux->next;
		contor++;
	}
	return (contor);
}


int		count_path(char **path_list)
{
	int i;

	i = 0;
	while (path_list[i])
		i++;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 23:50:33 by smatias-          #+#    #+#             */
/*   Updated: 2017/07/05 13:48:21 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		calc_str_arg(char *source, char separator)
{
	/*
	*calculate number of "words" separated by separator
	*/
	int count;

	count = 0;
	while (*source)
	{
		while (*source == separator && *source)
			source++;
		while (*source != separator && *source)
			source++;
		count++;
	}
	if (*(source - 1) == separator)
		count--;
	return (count);
}

int 	ft_get_type(char *str)
{
	int i;

	i = calc_str_arg(str, ' ');
	printf("i=%d, str = %s\n", i, str);
	if (i == 1 && ft_strcmp(str, "##start") == 0)
		return (1);
	if (i == 1 && ft_strcmp(str, "##end") == 0)
		return (2);
	if (i == 3 && validate_room(str))
		return (3);
		if (i == 1 && validate_link(str))
			return (4);
		if (i == 1 && validate_ant(str) == 1)
			return (5);
	if (str[0] == '#')
		return (6);
	return (0);
}

void	ft_execute_solution(t_data *data, char *str, int type)
{
	char *temp;

	ft_putstr(str);
	ft_putstr("\n");
	ft_get_next_line(0, &temp);
	// printf("temp=%s ft_get_type(temp)=%d\n", temp, ft_get_type(temp));
	if (ft_get_type(temp)!= 3)
		ft_error();
	// printf("test temp = %s type =%d\n", temp, type);
	if (type == 1)
		data->st = return_str_elem(temp, ' ', 0);
	if (type == 2)
		data->nd = return_str_elem(temp, ' ', 0);
	ft_add_room(data, temp);
	ft_putstr(temp);
	ft_putstr("\n");
	free(temp);
}

void	ft_execute(t_data *data, char *str)
{
	int 	type;
	char	*aux;

	type = ft_get_type(str);
	// printf("type = %d\n", type);
	if (type == 1 || type == 2)
		ft_execute_solution(data, str, type);
	else if (type == 3)
		ft_add_room(data, str);
	else if (type == 4)
		ft_add_link(data, str);
	else if (type == 5)
		data->no_ant = ft_atoi(str);
	else if (type == 6)
		return ;
	else if (type == 0)
		ft_error();
}



int		main(int ac, char**av)
{
	char	*str;
	t_data	*data;
	int		aux;

	data = (t_data*)malloc(sizeof(t_data));
	aux = 1;
	init_data(data);
	while (aux)
	{
		aux = ft_get_next_line(0, &str);
		if (!aux)
			break;
		ft_execute(data, str);
		if (!(ft_strcmp(str, "##start") == 0 || ft_strcmp(str, "##end") == 0))
			ft_putstr(str);
		if (!(ft_strcmp(str, "##start") == 0 || ft_strcmp(str, "##end") == 0))
			ft_putstr("\n");
		free(str);
	}
	validate_error(data);
	generate_path(data);
	validate_error(data);
	generate_ant_path(data);
	ft_move_ants(data);
	return (0);
}
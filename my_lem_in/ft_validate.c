/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 01:14:20 by smatias-          #+#    #+#             */
/*   Updated: 2017/07/05 01:18:41 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		validate_room(char *str)
{
	char	*x;
	char	*y;
	int		i;
	int		fail;

	i = 0;
	fail = 0;
	x = return_str_elem(str, ' ', 1);
	y = return_str_elem(str, ' ', 2);
	if (str_is_number(x) == 0)
		fail = 1;
	if (str_is_number(y) == 0)
		fail = 1;
	printf("test fail =%d, x=%s, y=%s\n", fail, x, y);
	free(x);
	free(y);
	if (fail)
		return (0);
	return (1);
}

int		validate_link(char *str)
{
	int link_count;

	link_count = 0;
	while (*str)
	{
		if (*str == '-')
			link_count++;
		str++;
	}
	if (link_count == 1)
		return (1);
	else
		return (0);
}

int		validate_ant(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			count++;
		str++;
	}
	if (count)
		return (0);
	else
		return (1);
}

int		validate_data(t_data *data)
{
	if (data->st == NULL)
		return (0);
	if (data->nd == NULL)
		return (0);
	if (data->no_ant == 0)
		return (0);
	if (data->room == NULL)
		return (0);
	if (data->link == NULL)
		return (0);
}

void	validate_error(t_data *data)
{
	if (!validate_data(data))
		ft_error();
	if (data->path != NULL)
	{
		if (!validate_path(data))
			ft_error();
	}
}
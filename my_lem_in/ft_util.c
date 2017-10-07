/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 01:32:23 by smatias-          #+#    #+#             */
/*   Updated: 2017/07/05 01:18:35 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	init_data(t_data *data)
{
	data->id = 1;
	data->no_ant = 0;
	data->st = NULL;
	data->nd = NULL;
	data->room = NULL;
	data->link = NULL;
	data->ant = NULL;
	data->path = NULL;
}

void	ft_error(void)
{
	ft_putstr("Error\n");
	exit(0);
}


int 	calc_arg_length(char *source,char separator,int arg)
{
	int arg_len;
	int i;

	i = 0;
	while (*source)
	{
		arg_len = 0;

		while (*source == separator && *source)
			source++;
		while (*source != separator && *source)
		{
			arg_len++;
			source++;
		}
		if (i == arg)
			break;
		i++;
	}
	return (arg_len);
}

char	*return_str_elem(char *source, char separator, int arg)
{
	int 	len;
	int 	i;
	char	*ret;

	i = 0;
	len = calc_arg_length(source, separator, arg);
	ret = (char*)malloc(sizeof(char*) * len + 1);
	while (*source)
	{
		while (*source == separator)
			source++;
		if (i == arg)
			break;
		while (*source != separator)
			source++;
		i++;
	}
	while (*source != separator && *source)
	{
		*ret++ = *source++;
	}
	*ret = '\0';
	return (ret - len);
}

int 	str_is_number(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 21:11:08 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 16:24:53 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int ac, char **av)
{
	t_env	*m;

	if (ac == 2)
	{
		m = (t_env*)malloc(sizeof(t_env));
		m = ft_init_env(av[1], m);
		mlx_expose_hook(m->win, expose_hook, m);
		mlx_key_hook(m->win, key_hook, m);
		mlx_loop(m->mlx);
	}
	else
		ft_error("usage: ./fdf filename");
	return (0);
}

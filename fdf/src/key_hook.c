/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 11:51:24 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 14:12:07 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_height(t_env *m, int n)
{
	ft_control_height(m, n);
	expose_hook(m);
}

void	key_hook3(t_env *m, int keycode)
{
	if (keycode == 11)
	{
		m->clr = 'b';
		expose_hook(m);
	}
	else if (keycode == 46)
	{
		ft_reset(m);
		expose_hook(m);
	}
	ft_putnbr(keycode);
	ft_putchar('\n');
}

void	key_hook2(t_env *m, int keycode)
{
	if (keycode == 8)
	{
		ft_center(m);
		expose_hook(m);
	}
	else if (keycode == 2)
		expose_hook(m);
	else if (keycode == 17)
		ft_dot(m);
	else if (keycode == 15)
	{
		m->clr = 'r';
		expose_hook(m);
	}
	else if (keycode == 5)
	{
		m->clr = 'g';
		expose_hook(m);
	}
	else
		key_hook3(m, keycode);
	ft_putnbr(keycode);
	ft_putchar('\n');
}

int		key_hook(int keycode, t_env *m)
{
	if (keycode == 53)
		exit(0);
	else if (keycode == 116)
		ft_height(m, 1);
	else if (keycode == 121)
		ft_height(m, -1);
	else if (keycode == 123 || keycode == 124 || keycode == 125 ||
			keycode == 126)
	{
		ft_move(m, keycode);
		expose_hook(m);
	}
	else if (keycode == 69 || keycode == 78)
	{
		ft_zoom(m, keycode);
		expose_hook(m);
	}
	else
		key_hook2(m, keycode);
	ft_putnbr(keycode);
	ft_putchar('\n');
	return (0);
}

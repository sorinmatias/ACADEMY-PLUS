/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 18:03:52 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/28 18:07:30 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_wstrlen(const wchar_t *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
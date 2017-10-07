/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 10:47:54 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 10:47:56 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	clearhead(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	return (i);
}

static long	ret(unsigned long nr, int neg)
{
	long	div;
	int		min;
	int		max;
	long	ret;

	max = 2147483647;
	min = -max - 1;
	div = 4294967296;
	if (neg == 1)
		ret = -nr;
	else
		ret = nr;
	if (ret > max)
		ret = (ret - max) % (div) + min - 1;
	else
	{
		if (ret < min)
			ret = (ret - min) % (div) + max + 1;
	}
	return (ret);
}

int			ft_atoi(const char *str)
{
	int				i[2];
	unsigned long	nr;
	unsigned long	lmax;

	lmax = 9223372036854775808UL;
	nr = 0;
	i[1] = 0;
	i[0] = clearhead(str);
	if (str[i[0]] == '-')
		i[1] = 1;
	if (str[i[0]] == '+' || str[i[0]] == '-')
		i[0]++;
	while (str[i[0]] >= '0' && str[i[0]] <= '9')
	{
		nr *= 10;
		nr += str[i[0]] - 48;
		i[0]++;
		if (nr >= lmax && i[1] == 1)
			return (0);
		else if (nr >= lmax)
			return (-1);
	}
	return (ret(nr, i[1]));
}

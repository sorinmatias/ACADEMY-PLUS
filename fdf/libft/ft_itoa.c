/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 10:53:04 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 10:53:26 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_nblen(n);
	if (!(str = ft_strnew(size)))
		return (NULL);
	if (n == 2147483647)
		str = ft_strdup("2147483647");
	while (n >= 10 || n <= -10)
	{
		str[size - 1] = ft_abs(n % 10) + '0';
		n = n / 10;
		size--;
	}
	str[size - 1] = ft_abs(n % 10) + '0';
	if (size == 2)
		str[0] = '-';
	return (str);
}

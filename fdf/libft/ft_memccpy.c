/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 10:55:47 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 10:55:48 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)(str1 + i) = *(unsigned char*)(str2 + i);
		if (*(unsigned char*)(str2 + i) == (unsigned char)c)
			return (str1 + i + 1);
		i++;
	}
	return (NULL);
}

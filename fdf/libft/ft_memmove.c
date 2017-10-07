/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 10:58:16 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 10:58:17 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			i;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	if (ps1 > ps2)
		while (i < n)
		{
			ps1[n - 1] = ps2[n - 1];
			n--;
		}
	else
		while (i < n)
		{
			ps1[i] = ps2[i];
			i++;
		}
	return (s1);
}

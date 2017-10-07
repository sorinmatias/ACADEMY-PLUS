/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:29:17 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 11:29:42 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strrchr(const char *s, int c)
{
	const char	*aux;

	aux = NULL;
	while (*s)
	{
		if ((char)*s == (char)c)
			aux = s;
		s++;
	}
	if ((char)*s == (char)c)
		return ((char*)s);
	return ((char*)aux);
}

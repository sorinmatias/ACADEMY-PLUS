/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 10:55:30 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 10:55:31 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *aux;

	if (!(aux = (void*)malloc(sizeof(*aux) * (size))) || !size)
		return (NULL);
	aux = ft_memset(aux, 0, size);
	return (aux);
}

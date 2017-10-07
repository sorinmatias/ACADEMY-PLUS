/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:28:40 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 11:28:42 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *aux;

	if (!(aux = malloc(sizeof(*aux) * (size + 1))))
		return (NULL);
	aux = (char*)ft_memset(aux, '\0', size + 1);
	return (aux);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:14:19 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 11:14:21 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*aux;

	if ((aux = (char*)malloc((ft_strlen(str) + 1))) == NULL)
		return (NULL);
	ft_strcpy(aux, str);
	return (aux);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:28:59 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 11:29:02 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	int			found;

	i = 0;
	found = 1;
	if (!ft_strlen(find))
		return ((char *)str);
	while (*(str + i) && i < len)
	{
		j = 0;
		if (*(str + i) == *(find + 0))
		{
			k = i;
			found = 1;
			while (*(str + k) && *(find + j) && j < len && k < len)
				if (*(str + k++) != *(find + j++))
					found = 0;
			if (found && !*(find + j))
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}

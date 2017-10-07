/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:30:48 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 11:30:49 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*copie;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	copie = ft_strnew(len);
	if ((copie == NULL) || (start + len) > ft_strlen(s))
		return (NULL);
	while (s[start] && copie && len > 0)
	{
		copie[i] = s[start];
		start++;
		i++;
		len--;
		if (start > ft_strlen(s))
			return (NULL);
	}
	copie[i] = '\0';
	return (copie);
}

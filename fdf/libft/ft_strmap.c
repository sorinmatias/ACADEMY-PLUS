/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:25:52 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 11:25:54 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	str = ft_strdup(s);
	if (!s || !f || !str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(str[i]);
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 14:33:34 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/03 14:35:11 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*copie;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s)
		i++;
	if (i == ft_strlen(s))
		return (ft_strdup(""));
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j != i)
		j--;
	copie = ft_strsub(s, i, j - i + 1);
	return (copie);
}

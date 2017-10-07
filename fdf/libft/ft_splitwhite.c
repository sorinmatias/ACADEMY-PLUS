/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 07:31:05 by smatias-          #+#    #+#             */
/*   Updated: 2016/07/13 15:04:17 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen_tw(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			len++;
			i++;
		}
	}
	return (len);
}

int		ft_strlen_w(char *str, int i)
{
	int len;

	len = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		len++;
		i++;
	}
	return (len);
}

int		ft_jump_spaces(char *str, int i)
{
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		k;
	int		j;
	int		i;
	char	**s;

	if ((s = (char**)malloc(sizeof(char*) * ft_strlen_tw(str) + 1)) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		i = ft_jump_spaces(str, i);
		if (str[i])
		{
			k = 0;
			s[j] = (char*)malloc(sizeof(char) * ft_strlen_w(str, i) + 1);
			if (s[j] == NULL)
				return (NULL);
			while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				s[j][k++] = str[i++];
			s[j++][k++] = '\0';
		}
	}
	s[j] = 0;
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 07:10:09 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/01 16:27:00 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_ishexdigit(char c)
{
	return (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5'
			|| c == '6' || c == '7' || c == '8' || c == '9' || c == 'a' ||
			c == 'b' || c == 'c' || c == 'd' || c == 'e' || c == 'f' || c == 'A'
			|| c == 'B' || c == 'C' || c == 'D' || c == 'E' || c == 'F');
}

int		ft_iscolor(char *str)
{
	int		contor;
	char	*aux;

	aux = (char*)malloc(sizeof(char) * 10);
	aux = ft_strncpy(aux, str, 9);
	aux[9] = '\0';
	contor = (*aux++ == ',') ? 1 : 0;
	contor = (*aux++ == '0') ? contor + 1 : contor;
	contor = (*aux++ == 'x') ? contor + 1 : contor;
	while (*aux)
		if (ft_ishexdigit(*aux++))
			contor++;
	contor = (*aux++ == ',') ? contor + 1 : contor;
	if (contor > 10)
	{
		ft_error("Map error : Color wrong format!");
		return (0);
	}
	return (1);
}

void	ft_validate_line(char *line)
{
	while (*line)
	{
		if (ft_iscolor(line))
		{
			line = line + 3;
			while (ft_ishexdigit(*line))
				line++;
		}
		else if (*line == ' ')
			line++;
		else if (ft_isdigit(*line) || (*line == '-' && ft_isdigit(*(line + 1))))
			while (ft_isdigit(*line) || (*line == '-' &&
						ft_isdigit(*(line + 1))))
				line++;
		else
			ft_error("Map error : Wrong input character!");
	}
}

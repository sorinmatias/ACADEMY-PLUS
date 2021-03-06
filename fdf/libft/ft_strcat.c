/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:12:11 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 11:12:13 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *d, const char *s)
{
	int i;

	i = 0;
	while (d[i])
		i++;
	while (*s)
		d[i++] = *s++;
	d[i] = '\0';
	return (d);
}

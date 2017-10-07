/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 05:33:34 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/02 05:51:53 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_check_line(char *str)
{
	if (str == NULL)
		return (0);
	while (*str)
		if (*str++ == '\n')
			return (1);
	return (0);
}

t_file		*ft_find_fd(t_file *aux, int const fd)
{
	t_file *tmp;

	tmp = aux;
	if (tmp && tmp->fd == fd)
		return (tmp);
	while (tmp && (tmp = tmp->next) != aux)
		if (tmp->fd == fd)
			return (tmp);
	return (NULL);
}

t_file		*ft_check_list(int const fd, t_file **lst)
{
	t_file *tmp;
	t_file *new;

	tmp = ft_find_fd(*lst, fd);
	if (tmp)
		return (tmp);
	new = NULL;
	if ((new = (t_file*)malloc(sizeof(t_file))) == NULL)
		return (NULL);
	new->s = NULL;
	new->s = (char*)malloc(sizeof(new->s));
	new->fd = fd;
	if (*lst)
	{
		new->next = *lst;
		tmp = *lst;
		while (tmp->next != *lst)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		new->next = new;
	return (new);
}

char			*ft_strjoin_clean_buf(char const *s1, char *s2)
{
	char	*aux;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	aux = (char*)malloc(sizeof(*aux) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!aux)
		return (NULL);
	while (s1[i])
			aux[j++] = s1[i++];
	i = 0;
	while (s2[i])
		aux[j++] = s2[i++];
	aux[j] = '\0';
	i = 0;
	while (s2[i])
	{
		s2[i] = '\0';
		i++;
	}
	return (aux);
}

int			ft_get_next_line(const int fd, char **line)
{
	int					ret;
	char				*buf;
	static t_file		*lst;

	if (fd >= 1000 || fd < 0 || line == NULL)
		return (-1);
	buf = (char*)malloc(sizeof(buf) * (BUF_SIZE + 1));
	lst = ft_check_list(fd, &lst);
	while (!ft_check_line(lst->s))
	{
		if ((ret = read(fd, buf, BUF_SIZE)) < 0)
			return (-1);
		else if (ret == 0)
		{
			if (ft_strlen(lst->s) == 0)
				return (0);
			lst->s = ft_strjoin(lst->s, "\n");
		}
		else
			lst->s = ft_strjoin_clean_buf(lst->s, buf);
	}
	*line = ft_strsub(lst->s, 0, ft_strlen(lst->s) -
			ft_strlen(ft_strchr(lst->s, '\n')));
	lst->s = ft_strdup(ft_strchr(lst->s, '\n') + 1);
	return (1);
}

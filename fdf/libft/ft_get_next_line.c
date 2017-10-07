/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 15:13:50 by smatias-          #+#    #+#             */
/*   Updated: 2017/02/03 16:08:55 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_line(char *str)
{
	if (str == NULL)
		return (0);
	while (*str)
		if (*str++ == '\n')
			return (1);
	return (0);
}

t_file	*ft_find_fd(t_file *aux, int const fd)
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

t_file	*ft_check_list(int const fd, t_file **lst)
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

char	*ft_strjoin_clean(char const *s1, char *s2, size_t size)
{
	if (size < ft_strlen(s2))
		s2[size] = '\0';
	return (ft_strjoin(s1, s2));
}

int		ft_get_next_line(const int fd, char **line)
{
	int				ret;
	char			*buf;
	static t_file	*lst;

	if (fd < 0 || line == NULL)
		return (-1);
	buf = (char*)malloc(sizeof(buf) * (BUFF_SIZE + 1));
	lst = ft_check_list(fd, &lst);
	while (!ft_check_line(lst->s))
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) < 0)
			return (-1);
		else if (ret == 0)
		{
			if (ft_strlen(lst->s) == 0)
				return (0);
			lst->s = ft_strjoin(lst->s, "\n");
		}
		else
			lst->s = ft_strjoin_clean(lst->s, buf, ret);
	}
	*line = ft_strsub(lst->s, 0, ft_strlen(lst->s) -
			ft_strlen(ft_strchr(lst->s, '\n')));
	lst->s = ft_strdup(ft_strchr(lst->s, '\n') + 1);
	return (1);
}

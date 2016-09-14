#include "get_next_line.h"


int    		 ft_check_line(char *str)
{
  if (str == NULL)
    return (0);
  while (*str)
    if (*str++ == '\n')
      return (1);
  return (0);
}

t_file		*find_fd(t_file *aux, int const fd)
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

	tmp = find_fd(*lst, fd);
  	// if (tmp && tmp->fd == fd)
   //  	return (tmp);
  	// while (tmp && (tmp = tmp->next) != *lst)
   //  	if (tmp->fd == fd)
   //    		return (tmp);
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

int		get_next_line(const int fd, char **line)
{
	int					ret;
	char				*buf;
	static t_file		*lst;

	buf = (char*)malloc(sizeof(buf) * (BUF_SIZE + 1));
	lst = ft_check_list(fd, &lst);
	while (!ft_check_line(lst->s))
	{
		if ((ret = read(fd, buf, BUF_SIZE))< 0)
			return (-1);
		else if (ret == 0)
			{
				if (ft_strlen(lst->s) == 0)
					return (0);
				lst->s = ft_strjoin(lst->s, "\n");
			}
		else 
			lst->s = ft_strjoin(lst->s, buf);
	}
	*line = ft_strsub(lst->s, 0, ft_strlen(lst->s) - ft_strlen(ft_strchr(lst->s, '\n')));
	lst->s = ft_strdup(ft_strchr(lst->s, '\n') + 1);
	return (1);
}
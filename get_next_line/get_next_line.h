
#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#define BUF_SIZE	1

#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct	s_file
{
  char			*s;
  int			fd;
  struct s_file	*next;
}				t_file;

int				get_next_line(const int fd, char **line);

#endif

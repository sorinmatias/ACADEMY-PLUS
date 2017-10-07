#include "libft.h"

int 			ft_strisprint(int *str)
{
	while (*str)
	{
		if (ft_isprint(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
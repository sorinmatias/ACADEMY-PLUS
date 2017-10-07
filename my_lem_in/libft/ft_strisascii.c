#include "libft.h"

int 			ft_strisascii(int *str)
{
	while (*str)
	{
		if (ft_isascii(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
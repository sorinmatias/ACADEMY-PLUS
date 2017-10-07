#include "libft.h"

int 			ft_strisalpha(int *str)
{
	while (*str)
	{
		if (ft_isalpha(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
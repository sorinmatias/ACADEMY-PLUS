#include "libft.h"

char 	*ft_strtolower(char *str)
{
	while (*str)
	{
		*str = ft_tolower(*str);
		str++;
	}
	return (str);
}
#include "libft.h"

char 	*ft_strtoupper(char *str)
{
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
	return (str);
}
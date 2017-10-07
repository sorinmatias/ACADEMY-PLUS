#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *aux;

	if (!(aux = malloc(sizeof(*aux) * (size + 1))))
		return (NULL);
	aux = (char*)ft_memset(aux, '\0', size + 1);
	return (aux);
}
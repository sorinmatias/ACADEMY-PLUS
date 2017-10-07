#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *aux;

	if (!(aux = (void*)malloc(sizeof(*aux) * (size))) || !size)
		return (NULL);
	aux = ft_memset(aux, 0, size);
	return (aux);
}
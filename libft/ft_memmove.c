#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	i = 0;
	if (!(aux = (unsigned char*)malloc(sizeof(*aux) * (n + 1))))
		return (NULL);
	while (i < n)
	{

		*(aux + i) = *(unsigned char*)(s2 + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(unsigned char*)(s1 + i) = *(aux + i);
		i++;
	}
	free(aux);
	return (s1);
}
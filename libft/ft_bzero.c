#include <string.h>

void	ft_bzero(void *str, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		*(unsigned char*)(str + i++) = '\0';
}
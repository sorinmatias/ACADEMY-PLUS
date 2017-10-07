#include <string.h>

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)(str1 + i) = *(unsigned char*)(str2 + i);
		i++;
	}
	return (str1);
}
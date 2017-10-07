#include <string.h>

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)(str1 + i) = *(unsigned char*)(str2 + i);
		if (*(unsigned char*)(str2 + i) == (unsigned char)c)
			return (str1 + i + 1);
		i++;
	}
	return (NULL);
}
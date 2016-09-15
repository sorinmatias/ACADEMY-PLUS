#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t lend;
	size_t lens;

	lens = 0;
	while (src[lens])
		lens++;
	i = 0;
	while (dst[i])
		i++;
	lend = i;
	j = 0;
	if (size < lend)
		return (lens + size);
	if (size == lend)
		return (lend + lens);
	else
	{
		while (src[j] && j < size - lend - 1)
		{
			dst[i] = src[j];
			j++;
			i++;
		}
		dst[i] = '\0';
		return (lend + lens);
	}
}
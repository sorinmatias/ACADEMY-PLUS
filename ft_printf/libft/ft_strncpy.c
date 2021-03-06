#include <string.h>

char	*ft_strncpy(char *d, const char *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && s[i])
	{
		d[i] = s[i];
		i++;
	}
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
	return (d);
}